#include <cmath>
bool is_simple_power(int x, int n) {
    return pow(n, 1.0 / log(x) / log(n)) == static_cast<int>(pow(n, 1.0 / log(x) / log(n)));
}