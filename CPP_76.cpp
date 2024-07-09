#include <cmath>

bool is_simple_power(int x, int n) {
    double y = std::pow(n, std::log2(x)/std::log2(n));
    return (y == x);
}