#include <iostream>
#include <cmath>
#include <cassert>

double truncate_number(double number) {
    return number - static_cast<int>(number);
}

double fractional_part(double number) {
    return truncate_number(number);
}

assert (std::abs(fractional_part(123.456) - 0.456) < 1e-4);