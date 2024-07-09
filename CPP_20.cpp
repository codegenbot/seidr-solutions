#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::pair<float, float> a, std::pair<float, float> b) {
    return a.first == b.first && a.second == b.second;
}

std::pair<float, float> find_closest_elements(const std::vector<float>& numbers) {
    std::vector<float> sorted_numbers = numbers;
    sort(sorted_numbers.begin(), sorted_numbers.end());
    float min_diff = sorted_numbers[1] - sorted_numbers[0];
    std::pair<float, float> result = {sorted_numbers[0], sorted_numbers[1]};
    for (int i = 1; i < sorted_numbers.size() - 1; ++i) {
        if (sorted_numbers[i + 1] - sorted_numbers[i] < min_diff) {
            min_diff = sorted_numbers[i + 1] - sorted_numbers[i];
            result = {sorted_numbers[i], sorted_numbers[i + 1]};
        }
    }
    return result;
}