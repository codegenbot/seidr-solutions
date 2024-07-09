#include <iostream>
#include <cmath>
#include <cassert>

bool is_simple_power(int n, int x) {
    if (n == 1 && x == 1) return true;
    if (n == 1 || x == 1) return false;

    double power = log(static_cast<double>(x)) / log(static_cast<double>(n));
    return power == static_cast<int>(power);
}

int main() {
    assert(is_simple_power(1, 12) == true);
    return 0;
}