#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

bool has_close_elements(std::vector<float> numbers, float threshold) {
    std::sort(numbers.begin(), numbers.end());
    for (size_t i = 0; i < numbers.size() - 1; ++i) {
        if (std::abs(numbers[i] - numbers[i + 1]) < threshold) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<float> a = {1.0, 2.0, 3.9, 4.0, 5.0, 2.2};
    float threshold = 1.0;
  
    if (has_close_elements(a, threshold)) {
        std::cout << "Some elements are close enough.\n";
    } else {
        std::cout << "No close elements found.\n";
    }

    return 0;
}