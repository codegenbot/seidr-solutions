#include <vector>
#include <algorithm> // for sort
#include <cmath>     // for fabs

bool has_close_elements(std::vector<float> numbers, float threshold) {
    std::sort(numbers.begin(), numbers.end());
    for (int i = 1; i < numbers.size(); ++i) {
        if (std::fabs(numbers[i] - numbers[i - 1]) < threshold) {
            return true;
        }
    }
    return false;
}