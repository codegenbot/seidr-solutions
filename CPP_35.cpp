#include <iostream>
#include <algorithm>
#include <cmath>

int main() {
    int num;
    std::cout << "Enter a set of numbers (separated by spaces): ";
    while(std::cin >> num) {
        int max_val = *std::max_element(&num, &num + 1);
        int abs_max_val = std::abs(max_val);
        std::cout << "Max value is: " << max_val << std::endl;
        std::cout << "Absolute Max value is: " << abs_max_val << std::endl;
    }
    return 0;
}