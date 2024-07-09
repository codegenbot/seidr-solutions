#include <cmath>
#include <cassert>
#include <iostream>

bool is_simple_power(int x, int n) {
    assert(n > 0);

    if (x <= 0 || n <= 0) {
        return false;
    }

    if (x < 0 && n % 2 == 0) {
        return false;
    }

    double result = pow(std::abs(x), 1.0 / n);
    return std::abs(result - std::round(result)) < 1e-9;
}

int main() {
    int x, n;
    std::cin >> x >> n;

    if (is_simple_power(x, n)) {
        std::cout << x << " is a simple power of " << n << std::endl;
    } else {
        std::cout << x << " is not a simple power of " << n << std::endl;
    }

    return 0;
}