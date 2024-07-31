#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool has_close_elements(const std::vector<float>& numbers, float threshold) {
    std::vector<float> numbers_copy = numbers;
    std::sort(numbers_copy.begin(), numbers_copy.end());
    
    for (int i = 0; i < numbers_copy.size() - 1; ++i) {
        if (std::abs(numbers_copy[i] - numbers_copy[i + 1]) < threshold) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<float> a = {1.0, 2.0, 3.9, 4.0, 5.0, 2.2};
    std::cassert(has_close_elements(a, 0.5) == false);

    return 0;
}