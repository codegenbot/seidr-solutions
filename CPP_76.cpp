#include <cmath>
#include <cassert>

bool is_simple_power(int x, int n) {
    return pow(n, 1.0 / log2(x)) == (int)pow(n, 1.0 / log2(x));
}