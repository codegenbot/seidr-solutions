```cpp
#include <iostream>
#include <vector>
#include <cmath> // for abs function
#include <cassert>

bool has_close_elements(std::vector<float> numbers, float threshold) {
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
    std::vector<float> a={1.0, 2.0, 3.9, 4.0, 5.0, 2.2};
    if(has_close_elements({1.1, 2.2, 3.1, 4.1, 5.1}, 0.5)) {
        std::cout << "The given set of numbers contains two elements that are within the given threshold." << std::endl;
    } else {
        std::cout << "The given set of numbers does not contain any two elements that are within the given threshold." << std::endl;
    }
    return 0;
}