```cpp
#include <iostream>
#include <cmath>
#include <initializer_list>

int sum_squares(std::initializer_list<double> lst) {
    int total = 0;
    for (double num : lst) {
        int ceil_num = std::ceil(num);
        total += std::pow(ceil_num, 2);
    }
    return total;
}

int main() {
    std::cout << "Enter numbers separated by space: ";
    std::string str;
    while (std::cin >> str) {
        double val = std::stod(str); 
        int total = sum_squares({val}); 
        std::cout << "Sum of squares for number: " << val << " is: " << total << "\n";
    }
    return 0;
}