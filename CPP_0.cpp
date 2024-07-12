#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

bool has_close_elements(const std::vector<float>& numbers, float threshold) {
    std::vector<float> sorted_numbers = numbers;
    std::sort(sorted_numbers.begin(), sorted_numbers.end());
    for (int i = 1; i < sorted_numbers.size(); ++i) {
        if (std::fabs(sorted_numbers[i] - sorted_numbers[i - 1]) < threshold) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<float> a = {1.0, 2.0, 3.9, 4.0, 5.0, 2.2};
    assert(has_close_elements({1.1, 2.2, 3.1, 4.1, 5.1}, 0.5) == false);
    return 0;
}