#include <iostream>
#include <cmath>
#include <cassert>

bool is_simple_power(int n, int x) {
    if (n <= 1 || x <= 0) {
        return false;
    }

    double result = log(x) / log(n);
    return std::abs(result - round(result)) < 1e-9;
}

int main() {
    assert(is_simple_power(1, 12) == true);

    return 0;
}