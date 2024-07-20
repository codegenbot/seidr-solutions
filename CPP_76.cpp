#include <iostream>
#include <cmath>

bool is_simple_power(int x, int n) {
    if (x <= 0 || n <= 0) {
        return false;
    }

    double result = log(x) / log(n);
    return (result - (int)result == 0);
}

int main() {
    // Test the function is_simple_power
    int x = 64;
    int n = 2;
    if (is_simple_power(x, n)) {
        std::cout << x << " is a power of " << n << std::endl;
    } else {
        std::cout << x << " is not a power of " << n << std::endl;
    }

    return 0;
}