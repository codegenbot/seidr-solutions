#include <iostream>
#include <cmath>

bool is_simple_power(int x, int n) {
    if (x <= 0 || n <= 0) {
        return false;
    }
    double power = std::log(x) / std::log(n);
    return (power == (int)power);
}

int main() {
    assert(is_simple_power(1, 12)==true);
    // Add more test cases as needed
    return 0;
}