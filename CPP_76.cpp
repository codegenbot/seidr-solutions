#include <iostream>
#include <cmath>
#include <cassert>

bool is_simple_power(int x, int n) {
    double x_d = stod(std::to_string(x));
    double n_d = stod(std::to_string(n));
    return pow(n_d, round(log(x_d) / log(n_d))) == x_d;
}

int main() {
    assert (is_simple_power(1, 4)==true);
    assert (is_simple_power(2, 2)==true);
    assert (is_simple_power(8, 2)==false);
    assert (is_simple_power(3, 2)==false);
    assert (is_simple_power(3, 1)==true);
    assert (is_simple_power(5, 3)==false);
}