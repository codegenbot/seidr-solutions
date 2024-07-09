#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

bool has_close_elements(const std::vector<float>& numbers, float threshold);

bool has_close_elements(const std::vector<float>& numbers, float threshold) {
    for (size_t i = 0; i < numbers.size(); ++i) {
        for (size_t j = i + 1; j < numbers.size(); ++j) {
            if (std::abs(numbers[i] - numbers[j]) < threshold) {
                return true;
            }
        }
    }
    return false;
}