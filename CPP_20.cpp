#include <algorithm>
#include <vector>
#include <utility>

bool issame(const std::pair<float, float>& a, const std::pair<float, float>& b) {
    return a == b;
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