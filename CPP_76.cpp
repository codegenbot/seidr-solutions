#include <iostream>
#include <cmath>
#include <cassert>

bool is_simple_power(int base, int num) {
    if (base < 2 || num < 2) return false;
    double root = std::pow(num, 1.0 / base);
    return std::abs(std::round(root) - root) < 1e-9;
}