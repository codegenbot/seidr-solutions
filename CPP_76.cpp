#include <cmath>

bool is_simple_power(int x, int n) {
    if (x == 1) {
        return true;
    }
    int power = 1;
    while (std::pow(n, power) <= x) {
        if (std::pow(n, power) == x) {
            return true;
        }
        power++;
    }
    return false;
}