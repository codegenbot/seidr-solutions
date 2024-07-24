#include <iostream>
#include <cmath>
#include <cassert>

bool is_simple_power(int x, int n) {
    if (x == 1) {
        return true;
    }
    for (int i = 2; i <= sqrt(x); i++) {
        int p = i, power = n;
        while (p < x) {
            p *= i;
            power *= n;
        }
        if (p == x && power == x) {
            return true;
        }
    }
    return false;
}

int main() {
    assert (is_simple_power(1, 12)==true);
    return 0;
}