```
#include <cmath>
#include <iostream>

bool is_simple_power(int x, int y) {
    if (y == 1)
        return true;
    while (y > 1) {
        if (x % y != 0)
            return false;
        x /= y;
        y--;
    }
    return true;
}

bool is_simple_power(int x, int y) {
    if (y == 1)
        return true;
    while (y > 1) {
        if (x % y != 0)
            return false;
        x /= y;
        y--;
    }
    return true;
}