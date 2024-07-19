#include <cmath>

float triangle_area(float a, float b, float c) {
    if (a + b > c && a + c > b && b + c > a) {
        float s = (a + b + c) / 2;
        float area = sqrt(s * (s - a) * (s - b) * (s - c));
        return static_cast<int>(area * 100 + 0.5) / 100.0;
    } else {
        return -1;
    }
}