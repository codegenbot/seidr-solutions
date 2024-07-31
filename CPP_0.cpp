#include <vector>

bool checkThreshold(const std::vector<int>& numbers, int threshold) {
    sort(numbers.begin(), numbers.end());
    for (int i = 1; i < numbers.size(); ++i) {
        if (abs(numbers[i] - numbers[i - 1]) < threshold) {
            return true;
        }
    }
    return false;
}