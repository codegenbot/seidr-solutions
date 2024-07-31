#include <algorithm>
#include <vector>
#include <cmath>

bool checkDuplicatesWithinThreshold(const std::vector<int>& numbers, int threshold) {
    if (numbers.size() < 2) {
        return false;
    }
    
    for (int i = 1; i < numbers.size(); ++i) {
        if (std::abs(numbers[i] - numbers[i - 1]) < threshold) {
            return true;
        }
    }
    return false;
}