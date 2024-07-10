#include <iostream>
#include <cmath>
#include <cassert>

bool is_simple_power(int base, int num) {
    if (base < 2 || num < 2) return false;
    double root = std::pow(num, 1.0 / base);
    return std::abs(std::round(root) - root) < 1e-9;
}

int main() {
    assert(is_simple_power(1, 12) == true);
    assert(is_simple_power(16, 2) == true);
    assert(is_simple_power(27, 3) == true);
    assert(is_simple_power(10, 2) == false);

    std::cout << "All tests passed successfully." << std::endl;

    return 0;
}