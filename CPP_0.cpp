#include <vector>

bool has_close_elements(const std::vector<float>& numbers, float threshold) {
    for (size_t i = 0; i < numbers.size(); ++i) {
        for (size_t j = i + 1; j < numbers.size(); ++j) {
            if (fabs(numbers[i] - numbers[j]) < threshold) {
                return true;
            }
        }
    }
    return false;
}