#include <vector>
#include <algorithm>
#include <cassert>

bool has_close_elements(const std::vector<float>& numbers, float threshold) {
    std::vector<float> sortedNumbers = numbers;
    std::sort(sortedNumbers.begin(), sortedNumbers.end());
    
    for (int i = 0; i < static_cast<int>(sortedNumbers.size()) - 1; ++i) {
        if (std::abs(sortedNumbers[i] - sortedNumbers[i + 1]) < threshold) {
            return true;
        }
    }
    return false;
}