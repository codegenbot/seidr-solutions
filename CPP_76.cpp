#include <cmath>

bool is_simple_power(int x, int n) {
    return std::pow(n, std::ceil(std::log(x)/std::log(n))) == x;
}