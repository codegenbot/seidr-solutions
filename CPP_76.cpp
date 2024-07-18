#include <iostream>
#include <cmath>

bool is_simple_power(int x, int n) {
    if (x <= 0 || n <= 0) {
        return false;
    }
    double result = std::log(x) / std::log(n);
    return (result == (int)result);
}

int main() {
    assert(is_simple_power(1, 12) == true); // Add your additional test cases here
    return 0;
}