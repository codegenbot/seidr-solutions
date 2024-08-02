#include <iostream>
#include <cassert>
#include <cmath>

bool is_simple_power(int x, int n) {
    if (x <= 0 || n <= 0) {
        return false;
    }
    
    double root = std::pow(x, 1.0 / n);
    
    return (std::pow(static_cast<int>(root + 0.5), n) == x);
}