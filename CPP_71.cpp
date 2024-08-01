#include <iostream>
#include <cmath>
#include <cassert>

float triangle_area(float a, float b, float c) {
    float s = (a + b + c) / 2;
    float area = sqrt(s * (s - a) * (s - b) * (s - c));
    if (a + b > c && a + c > b && b + c > a) {
        return roundf(area * 100) / 100;
    } else {
        return -1;
    }
}

int main() {
    assert(std::abs(triangle_area(2, 2, 10) + 1) < 0.01);
    assert(std::abs(triangle_area(3, 4, 5) - 6) < 0.01);
    assert(std::abs(triangle_area(6, 8, 10) - 24) < 0.01);
    assert(std::abs(triangle_area(5, 12, 13) - 30) < 0.01);
    assert(triangle_area(2, 3, 6) == -1);
    
    return 0;
}