#include <cmath>

bool is_simple_power(int x, int n) {
    double y = pow((double)n, (double)1.0);
    return (y == x);
}