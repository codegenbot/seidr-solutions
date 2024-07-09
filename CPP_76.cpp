#include <cmath>
#include <cassert>
#include <limits>

bool is_simple_power(int x, int n) {
    assert(n > 0);

    if (x <= 0 || n <= 0) {
        return false;
    }

    double result = pow(x, 1.0 / n);
    return std::abs(result - round(result)) < std::numeric_limits<double>::epsilon() * 100000;
}