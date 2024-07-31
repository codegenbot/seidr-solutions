\#include <iostream>
\#include <vector>
\#include <algorithm>
\#include <cassert>

bool has_close_elements(const std::vector<float>& numbers, float threshold) {
    std::vector<float> sortedNumbers = numbers;
    sort(sortedNumbers.begin(), sortedNumbers.end());
    for (int i = 1; i < sortedNumbers.size(); ++i) {
        if (abs(sortedNumbers[i] - sortedNumbers[i - 1]) < threshold) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<float> a = {1.0, 2.0, 3.9, 4.0, 5.0, 2.2};
    assert(has_close_elements(a, 0.5) == false);
    return 0;
}