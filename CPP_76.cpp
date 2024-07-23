#include <cmath>

bool is_simple_power(int x, int n) {
    double y = pow(n, ceil(log(double(x))/log(double(n)))));
    return y == x;
}