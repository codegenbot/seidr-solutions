#include <vector>
#include <algorithm>

bool has_close_elements(std::vector<float> numbers, float threshold) {
    std::sort(numbers.begin(), numbers.end());
    
    for (size_t i = 0; i < numbers.size() - 1; ++i) {
        if (numbers[i + 1] - numbers[i] <= threshold) {
            return true;
        }
    }
    
    return false;
}