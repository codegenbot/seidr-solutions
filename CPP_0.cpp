#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>

bool has_close_elements(std::vector<float> numbers, float threshold) {
    std::sort(numbers.begin(), numbers.end());
    for (int i = 1; i < numbers.size(); i++) {
        if (std::abs(numbers[i] - numbers[i - 1]) < threshold) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<float> a = {1.0, 2.0, 3.9, 4.0, 5.0, 2.2};
    std::cout << std::boolalpha << has_close_elements(a, 0.5);

    return 0;
} 
