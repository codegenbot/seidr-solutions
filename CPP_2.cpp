#include <iostream>
#include <cmath>
#include <cassert>

double truncate_number(double number) {
    return number - static_cast<int>(number);
}

int main() {
    double number;
    std::cin >> number;
    double fractionalPart = truncate_number(number);
    std::cout << fractionalPart << std::endl;
    assert (std::abs(truncate_number(123.456) - 0.456) < 1e-4);
    return 0;
}