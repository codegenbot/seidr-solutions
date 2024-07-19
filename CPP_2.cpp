#include <iostream>
#include <cmath>

double truncate_number(double number) {
    return number - std::floor(number);
}

int main() {
    double num;
    std::cin >> num;
    std::cout << truncate_number(num) << std::endl;
    return 0;
}