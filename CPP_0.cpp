#include <vector>
#include <algorithm>
#include <cmath>
#include <cassert>

bool has_close_elements(const std::vector<float>& numbers, float threshold) {
    std::vector<float> sortedNumbers = numbers;
    std::sort(sortedNumbers.begin(), sortedNumbers.end());
    for (size_t i = 1; i < sortedNumbers.size(); ++i) {
        if (std::fabs(sortedNumbers[i] - sortedNumbers[i - 1]) < threshold) {
            return true;
        }
    }
    return false;
}

int main() {
    assert(has_close_elements({1.1, 2.2, 3.1, 4.1, 5.1}, 0.5) == false);
    assert(has_close_elements({1.0, 2.0, 3.9, 4.0, 5.0, 2.2}, 0.5) == true);
    return 0;
}