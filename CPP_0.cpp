#include <vector>
#include <algorithm>
#include <cmath>

bool has_close_elements(const std::vector<float>& numbers, const float& threshold) {
    std::vector<float> sorted_numbers = numbers;
    std::sort(sorted_numbers.begin(), sorted_numbers.end());
    
    for (int i = 1; i < sorted_numbers.size(); ++i) {
        if (std::fabs(sorted_numbers[i] - sorted_numbers[i - 1]) < threshold) {
            return true;
        }
    }
    return false;
}