#include <iostream>
#include <algorithm>
#include <cmath>

int main() {
    int num;
    std::cout << "Enter a set of numbers (separated by spaces): ";
    while(std::cin >> num) {
        int max_val = *std::max_element({num});
        int abs_max_val = std::abs(*std::max_element({num}));
        std::cout << "Max value is: " << max_val << std::endl;
        std::cout << "Absolute Max value is: " << abs_max_val << std::endl;
    }
    return 0;
}