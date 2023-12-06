#include <cmath>

bool is_simple_power(int x, int n) {
    return (x == pow(n, int(log(x) / log(n))));
}