#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool has_close_elements(const std::vector<double>& numbers, double threshold) {
sort(numbers.begin(), numbers.end());
    for (int i = 1; i < numbers.size(); ++i) {
        if (abs(numbers[i] - numbers[i - 1]) < threshold) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<double> a = {1.0, 2.0, 3.9, 4.0, 5.0, 2.2};
    assert(has_close_elements({1.1, 2.2, 3.1, 4.1, 5.1}, 0.5) == false);
    assert(has_close_elements(a, 0.1) == true);
}