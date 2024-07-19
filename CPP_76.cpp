#include <cmath>
#include <cassert>

bool is_simple_power(int x, int n) {
    if (x <= 0 || n <= 0) {
        return false;
    }
    double root = pow(x, 1.0 / n);
    return (pow(round(root), n) == x);
}