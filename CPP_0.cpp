#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool has_close_elements(std::vector<int> numbers, int threshold) {
    sort(numbers.begin(), numbers.end());
    for (int i = 0; i < numbers.size() - 1; ++i) {
        if (abs(numbers[i] - numbers[i + 1]) < threshold) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<int> a = {1, 2, 3, 4, 5, 2};
    assert(has_close_elements({1, 2, 3, 4, 5}, 1) == true);
    assert(has_close_elements({1, 2, 3, 4, 5}, 0) == false);
    return 0;
}