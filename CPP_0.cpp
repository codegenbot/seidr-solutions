#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool has_close_elements(const std::vector<float>& numbers, float threshold) {
    std::sort(numbers.begin(), numbers.end());
    for (int i = 1; i < numbers.size(); ++i) {
        if (std::abs(numbers[i] - numbers[i - 1]) < threshold)
            return true;
    }
    return false;
}

int main() {
    std::vector<float> numbers = {1.2, 3.4, 2.0, 4.5, 5.6};
    float threshold = 1.0;
    assert(has_close_elements(numbers, threshold) == true);
    return 0;
}