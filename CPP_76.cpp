#include <cmath>

bool is_simple_power(int x, int n) {
    int power = std::log(x) / std::log(n);
    return std::pow(n, power) == x;
}