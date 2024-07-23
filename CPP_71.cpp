#include <cmath>
#include <iostream>
#include <cassert>

float triangle_area(float a, float b, float c) {
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        float s = (a + b + c) / 2;
        return round((sqrt(s * (s - a) * (s - b) * (s - c))) * 100.0) / 100.0;
    } else {
        return -1;
    }
}

int main() {
    assert(abs(triangle_area(2, 2, 10)) < 0.01);
    return 0;
}