/*
Write a function 'truncate_number' that takes a double number as input and returns the fractional part of the number after the decimal point.

For example:
truncate_number(123.456) should return 0.456
truncate_number(7.89) should return 0.89
truncate_number(45.6789) should return 0.6789
*/

#include <iostream>
#include <cassert>
#include <cmath>

double truncate_number(double number) {
    return number - floor(number);
}

int main() {
    assert(std::abs(truncate_number(123.456) - 0.456) < 1e-4);

    assert(std::abs(truncate_number(7.89) - 0.89) < 1e-4);
    assert(std::abs(truncate_number(45.6789) - 0.6789) < 1e-4);
    
    return 0;
}