#include <iostream>
#include <cmath>
#include <cassert>

bool is_simple_power(int n, int x) {
    if (n == 1 && x == 1) return true;
    if (n == 1 || x == 1) return false;

    double power = log((double) x) / log((double) n);
    return power == (int)power;
}