#include <iostream>
#include <cmath>

double truncate_number(double num) {
    return num - static_cast<int>(num);
}

int main() {
    double number;
    std::cin >> number;
    std::cout << truncate_number(number) << std::endl;
    return 0;
}