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
    std::vector<float> numbers = {1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f};
    assert(has_close_elements(numbers, 0.5f) == false);
   
    return 0;
}