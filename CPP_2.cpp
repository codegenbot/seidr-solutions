#include <iostream>
#include <cmath>
#include <cassert>

double truncate_number(double number) {
    return number - std::floor(number);
}

double remaining_decimal(double number) {
    return truncate_number(number);
}

int main() {
    assert(std::abs(remaining_decimal(123.456) - 0.456) < 1e-4);

    return 0;
}