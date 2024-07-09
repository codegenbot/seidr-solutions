#include <cmath>
bool is_simple_power(int x, int n) {
    if (n == 0)
        return false;

    double y = pow(n, round(log(double(x))/log(double(n))));
    return (y == x);
}