#include <vector>
#include <algorithm>
#include <cmath>

bool checkThreshold(const std::vector<int>& numbers, int threshold) {
    if(numbers.empty()) {
        return false;
    }

    std::sort(numbers.begin(), numbers.end());

    for (int i = 1; i < numbers.size(); ++i) {
        if (std::abs(numbers[i] - numbers[i - 1]) < threshold) {
            return true;
        }
    }

    return false;
}