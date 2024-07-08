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
    double n, threshold;
    std::cout << "Enter the size of array: ";
    std::cin >> n;
    std::vector<double> a(n);
    
    for (double& x : a) {
        std::cout << "Enter number " << &x << ":";
        std::cin >> x;
    }
    
    std::cout << "Enter the threshold value: ";
    std::cin >> threshold;

    if (has_close_elements(a, threshold)) {
        std::cout << "The array contains close elements." << std::endl;
    } else {
        std::cout << "The array does not contain close elements." << std::endl;
    }
}