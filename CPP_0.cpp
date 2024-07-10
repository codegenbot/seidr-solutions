#include <vector>
#include <algorithm>
#include <cassert>
#include <cmath>

bool has_close_elements(const std::vector<float>& numbers, float threshold) {
    std::vector<float> sortedNumbers = numbers;
    std::sort(sortedNumbers.begin(), sortedNumbers.end());
    
    for (size_t i = 0; i < sortedNumbers.size() - 1; ++i) {
        if (std::abs(sortedNumbers[i] - sortedNumbers[i + 1]) < threshold) {
            return true;
        }
    }
    
    return false;
}

int main() {
    std::vector<float> a = {1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f};
    assert(has_close_elements(a, 0.5f) == false);
    
    return 0;
}