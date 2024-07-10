#include <vector>
#include <algorithm>
#include <cassert>
#include <utility>

bool issame(std::pair<float, float> a, std::pair<float, float> b) {
    return a.first == b.first && a.second == b.second;
}

std::pair<float, float> find_closest_elements(const std::vector<float>& numbers) {
    std::vector<float> sorted_numbers = numbers;
    std::sort(sorted_numbers.begin(), sorted_numbers.end());
    float min_diff = sorted_numbers[1] - sorted_numbers[0];
    std::pair<float, float> closest_elements = {sorted_numbers[0], sorted_numbers[1]};
    for (size_t i = 1; i < sorted_numbers.size() - 1; ++i) {
        if (sorted_numbers[i + 1] - sorted_numbers[i] < min_diff) {
            min_diff = sorted_numbers[i + 1] - sorted_numbers[i];
            closest_elements = {sorted_numbers[i], sorted_numbers[i + 1]};
        }
    }
    return closest_elements;
}

int main() {
    assert(issame(find_closest_elements({1.2, 3.4, 5.6, 7.8}), std::make_pair(3.4f, 5.6f)));
    
    assert(issame(find_closest_elements({1.1f, 2.2f, 3.1f, 4.1f, 5.1f}), std::make_pair(2.2f, 3.1f)));
    
    return 0;
}