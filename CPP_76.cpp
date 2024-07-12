#include <cmath>
#include <iostream>

bool is_simple_power(int x, int n) {
    double y = pow(n, log(double(x)) / log(double(n)));
    return (y == x);
}