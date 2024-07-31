#include <iostream>
#include <algorithm>
#include <vector>

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::pair<float, float> find_closest_elements(const std::vector<float> &numbers) {
    std::vector<float> sorted_numbers = numbers;
    std::sort(sorted_numbers.begin(), sorted_numbers.end());
    
    float min_diff = sorted_numbers[1] - sorted_numbers[0];
    std::pair<float, float> result = {sorted_numbers[0], sorted_numbers[1]};
    
    for (size_t i = 1; i < sorted_numbers.size() - 1; ++i) {
        if (sorted_numbers[i + 1] - sorted_numbers[i] < min_diff) {
            min_diff = sorted_numbers[i + 1] - sorted_numbers[i];
            result = {sorted_numbers[i], sorted_numbers[i + 1]};
        }
    }
    
    return result;
}