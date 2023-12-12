#include <iostream>
#include <cmath>

bool any_int(int a, int b, int c) {
    int sum = (int)(a + b);
    return sum == c || sum == a || sum == b;
}