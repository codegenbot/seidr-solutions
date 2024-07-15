#include <vector>
#include <algorithm>

bool has_close_elements(const std::vector<float>& numbers, float threshold) {
    std::vector<float> sorted_numbers = numbers;
    std::sort(sorted_numbers.begin(), sorted_numbers.end());
    for (size_t i = 0; i < sorted_numbers.size() - 1; ++i) {
        if (std::abs(sorted_numbers[i] - sorted_numbers[i + 1]) < threshold) {
            return true;
        }
    }
    return false;
}