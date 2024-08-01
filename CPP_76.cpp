#include <cmath>

bool is_simple_power(int x, int n) {
    double y = pow(n, round(log(x)/log(n)));
    return std::abs(y - x) < 1e-9;
}