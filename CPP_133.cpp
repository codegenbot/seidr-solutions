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
    while (std::cin >> std::ws) {
        double num;
        if (!(std::cin >> num)) break;
        int total = sum_squares({num});
        std::cout << "Sum of squares for number: " << num << " is: " << total << "\n";
    }
    return 0;
}