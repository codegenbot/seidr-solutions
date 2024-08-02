```cpp
#include <vector>
#include <iostream>
#include <cmath>

bool has_close_elements(std::vector<float> numbers, float threshold) {
    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            if (std::abs(numbers[i] - numbers[j]) <= threshold) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    std::vector<float> a = {1.0, 2.0, 3.9, 4.0, 5.0, 2.2};
    std::vector<float> b = {1.1, 2.2, 3.1, 4.1, 5.1};
    
    if (has_close_elements(a, 0.1)) {
        std::cout << "Array A has close elements." << std::endl;
    } else {
        std::cout << "Array A does not have close elements." << std::endl;
    }

    if (has_close_elements(b, 0.5)) {
        std::cout << "Array B has close elements." << std::endl;
    } else {
        std::cout << "Array B does not have close elements." << std::endl;
    }
    
    return 0;
}