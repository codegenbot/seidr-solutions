#include <algorithm>
#include <cassert>
#include <vector>

bool issame(const std::pair<float, float>& a, const std::pair<float, float>& b) {
    return a == b;
}

std::pair<float, float> find_closest_elements(const std::vector<float>& numbers) {
    std::vector<float> sorted_numbers = numbers;
    std::sort(sorted_numbers.begin(), sorted_numbers.end());
    std::pair<float, float> closest_elements = {sorted_numbers[0], sorted_numbers[1]};
    float min_diff = closest_elements.second - closest_elements.first;
    for (size_t i = 1; i < sorted_numbers.size() - 1; ++i) {
        if (sorted_numbers[i + 1] - sorted_numbers[i] < min_diff) {
            closest_elements = {sorted_numbers[i], sorted_numbers[i + 1]};
            min_diff = closest_elements.second - closest_elements.first;
        }
    }
    return closest_elements;
}

int main() {
    assert(issame(find_closest_elements({1.1f, 2.2f, 3.1f, 4.1f, 5.1f}), {2.2f, 3.1f}));
    return 0;
}