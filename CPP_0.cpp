#include <vector>
#include <cassert>

bool has_close_elements(const std::vector<float>& numbers, float threshold) {
    std::sort(numbers.begin(), numbers.end());
    for (size_t i = 0; i < numbers.size() - 1; ++i) {
        if (std::abs(numbers[i] - numbers[i + 1]) < threshold) {
            return true;
        }
    }
    return false;
}