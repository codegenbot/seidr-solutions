#include <iostream>
#include <cmath>

bool is_simple_power(int x, int n) {
    if (x <= 0 || n <= 0) return false;
    double res = std::log(x) / std::log(n);
    return std::abs(res - (int)res) < 1e-9;
}

int main() {
    assert(is_simple_power(1, 12) == true);
    // Add more test cases if needed
    return 0;
}