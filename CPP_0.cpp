```cpp
#include <iostream>
#include <vector>
#include <cmath>

bool has_close_elements(std::vector<double> numbers, double threshold) {
    for (int i = 0; i < numbers.size(); i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            if (std::abs(numbers[i] - numbers[j]) <= threshold) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    std::vector<double> a={1.0, 2.0, 3.9, 4.0, 5.0, 2.2};
    std::vector<double> b={1.1, 2.2, 3.1, 4.1, 5.1};
    if (has_close_elements(a, 0.1)) {
        std::cout << "The elements in vector a are close." << std::endl;
    } else {
        std::cout << "The elements in vector a are not close." << std::endl;
    }
    
    if (has_close_elements(b, 0.5)) {
        std::cout << "The elements in vector b are close." << std::endl;
    } else {
        std::cout << "The elements in vector b are not close." << std::endl;
    }
    
    return 0;
}