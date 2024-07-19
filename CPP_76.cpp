#include <iostream>
#include <cmath>

bool is_simple_power(int x, int n) {
    if (n == 1) {
        return x == 1;
    }
    int power = log(x) / log(n);
    return std::pow(n, power) == x;
}

int main() {
    assert(is_simple_power(1, 12)==true);
    // Add more test cases here
    return 0;
}