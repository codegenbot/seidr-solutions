#include <iostream>
#include <vector>
#include <algorithm>

bool has_close_elements(const std::vector<int>& numbers, int threshold) {
    sort(numbers.begin(), numbers.end());
    for (int i = 0; i < numbers.size() - 1; ++i) {
        if (abs(numbers[i] - numbers[i + 1]) < threshold) {
            return true;
        }
    }
    return false;
}