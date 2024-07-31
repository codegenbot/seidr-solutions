#include <iostream>
#include <cmath>
#include <cassert>

double truncate_number(double number) {
    return number - static_cast<int>(number);
}

double solve(double number) {
    double fractionalPart = truncate_number(number);
    return fractionalPart;
}

assert (std::abs(truncate_number(123.456) - 0.456) < 1e-4);