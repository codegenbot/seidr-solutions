#include <cmath>

float triangle_area(float a, float b, float c) {
    if (a + b > c && a + c > b && b + c > a) {
        return round((a * b * sin(c)) / 2.0f, 2);
    } else {
        return -1;
    }
}

int main() {
    assert (fabs(triangle_area(2, 2, 10) + 1) < 0.01);
    return 0;
}