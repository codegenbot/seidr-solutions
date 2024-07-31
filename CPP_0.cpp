#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool has_close_elements(const std::vector<float>& numbers, float threshold) {
    std::vector<float> sorted_numbers = numbers;
    sort(sorted_numbers.begin(), sorted_numbers.end());
    for (int i = 1; i < sorted_numbers.size(); ++i) {
        if (std::abs(sorted_numbers[i] - sorted_numbers[i - 1]) < threshold) {
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