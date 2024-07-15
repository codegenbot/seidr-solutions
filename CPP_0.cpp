#include <iostream>
#include <vector>
#include <cmath>

bool has_close_elements(const std::vector<float>& numbers, float threshold) {
    for (size_t i = 0; i < numbers.size(); ++i) {
        for (size_t j = i + 1; j < numbers.size(); ++j) {
            if (fabs(numbers[i] - numbers[j]) < threshold) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    // Test the function
    std::vector<float> test_numbers = {1.2, 3.4, 5.6, 7.8};
    float test_threshold = 2.0;

    std::cout << "Result: " << has_close_elements(test_numbers, test_threshold) << std::endl;
    
    return 0;
}