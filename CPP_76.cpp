#include <iostream>
#include <cmath>

bool is_simple_power(double x, double n);

bool is_simple_power(double x, double n) {
    if (x <= 0 || n <= 0) {
        return false;
    }
    double power = log(x) / log(n);
    return power == (int)power;
}

int main() {
    assert(is_simple_power(1, 12) == true);
    return 0;
}