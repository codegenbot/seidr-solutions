#include <vector>
#include <algorithm>
#include <iostream>
#include <cassert>
#include <cmath>

bool has_close_elements(std::initializer_list<float> numbers, float threshold) {
    std::vector<float> numList(numbers);
    std::sort(numList.begin(), numList.end());
    for (int i = 0; i < numList.size() - 1; ++i) {
        if (std::abs(numList[i] - numList[i + 1]) < threshold) {
            return true;
        }
    }
    return false;
}

int main() {
    assert(!has_close_elements({1.1, 2.2, 3.1, 4.1, 5.1}, 0.5));
    return 0;
}