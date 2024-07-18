#include <iostream>
#include <vector>
#include <algorithm>

bool has_close_elements(std::vector<float>& numbers, float threshold) {
    std::sort(numbers.begin(), numbers.end());
    for (int i = 0; i < numbers.size() - 1; ++i) {
        if (std::abs(numbers[i] - numbers[i + 1]) < threshold) {
            return true;
        }
    }
    return false;
}

int main() {
    // Sample Input and Output to validate correctness
    std::vector<float> num1 = {1.0, 2.0, 3.0};
    std::vector<float> num2 = {1.0, 2.9, 3.0};
    float threshold = 1.1;

    std::cout << has_close_elements(num1, threshold) << std::endl; // Output: 0
    std::cout << has_close_elements(num2, threshold) << std::endl; // Output: 1

    return 0;
}