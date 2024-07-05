#include <climits>

bool is_simple_power(int x, int n) {
    if (n == 1) return x == 1;
    int power = 1;
    while (power < x) {
        if (power > INT_MAX / n) return false;
        power *= n;
    }
    return power == x;
}