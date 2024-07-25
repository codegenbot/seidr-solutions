#include<iostream>
#include<cmath>

float triangle_area(int a, int b, int c) {
    if (a + b > c && a + c > b && b + c > a) {
        float s = (a + b + c) / 2.0f;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    } else {
        return -1;
    }
}

int main() {
    assert(abs(triangle_area(2, 2, 10) + 1) < 0.01);
    return 0;
}