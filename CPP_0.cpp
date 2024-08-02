#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>

bool has_close_elements(const std::vector<float>& numbers, float threshold) {
    for (size_t i = 0; i < numbers.size(); ++i) {
        for (size_t j = i + 1; j < numbers.size(); ++j) {
            if (std::fabs(numbers[i] - numbers[j]) < threshold) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    std::vector<float> numbers{1.0, 2.0, 3.9, 4.0, 5.0, 2.2};
    assert(has_close_elements(numbers, 0.5) == false);
   
    return 0;
}