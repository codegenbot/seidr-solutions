#include <cassert>
#include <cmath>

bool is_simple_power(int n, int x) {
    if (n == 1) {
        return x == 1;
    }
    int power = log(x) / log(n);
    return pow(n, power) == x;
}