#include <iostream>
#include <cmath>

int truncate_number(double number) {
    return number - floor(number);
}

int main() {
    double number;
    std::cin >> number;

    std::cout << truncate_number(number) << std::endl;

    return 0;
}