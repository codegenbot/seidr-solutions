#include <iostream>
#include <cmath>
#include <cassert>

int multiply(int a, int b) {
    if (a == 0 || b == 0) {
        return 0;
    }
    return abs((a % 10) * (b % 10));
}