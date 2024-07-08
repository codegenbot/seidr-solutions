#include <vector>
#include <cmath>
#include <iostream>

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
    std::vector<float> a;
    float b;
    std::cout << "Enter the size of array: ";
    std::cin >> a.size();
    a.resize(a.size());
    std::cout << "Enter the elements of array:" << std::endl;
    for (int i = 0; i < a.size(); i++) {
        std::cout << "Element " << i + 1 << ":";
        std::cin >> a[i];
    }
    std::cout << "Enter the threshold value: ";
    std::cin >> b;
    if (has_close_elements(a, b)) {
        std::cout << "The array contains close elements." << std::endl;
    } else {
        std::cout << "The array does not contain close elements." << std::endl;
    }
}