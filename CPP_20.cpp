#include <algorithm>
#include <vector>
#include <utility>
#include <cassert>

std::pair<size_t, size_t> find_closest_elements(const std::vector<float>& numbers) {
    std::vector<float> sorted_numbers = numbers;
    std::sort(sorted_numbers.begin(), sorted_numbers.end());
    float min_diff = sorted_numbers[1] - sorted_numbers[0];
    std::pair<size_t, size_t> closest_indices = {0, 1};

    for (size_t i = 1; i < sorted_numbers.size() - 1; ++i) {
        if (sorted_numbers[i + 1] - sorted_numbers[i] < min_diff) {
            min_diff = sorted_numbers[i + 1] - sorted_numbers[i];
            closest_indices = {i, i + 1};
        }
    }

    return closest_indices;
}

int main() {
    assert(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}) == std::pair<size_t, size_t>(1, 2));
    return 0;
}