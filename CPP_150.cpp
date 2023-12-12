#include <iostream>

int x_or_y(int n, int x, int y) {
    if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0) {
        return y;
    } else {
        return x;
    }
}