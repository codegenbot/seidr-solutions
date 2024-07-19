#include <iostream>
#include <cassert>
#include <cmath>

double truncate_number(double number) {
    return number - std::floor(number);
}

int main() {
    double num1, num2, num3;
    std::cin >> num1 >> num2 >> num3;

    assert(std::abs(truncate_number(num1) - (num1 - std::floor(num1))) < 1e-4);
    assert(std::abs(truncate_number(num2) - (num2 - std::floor(num2))) < 1e-4);
    assert(std::abs(truncate_number(num3) - (num3 - std::floor(num3))) < 1e-4);

    return 0;
}