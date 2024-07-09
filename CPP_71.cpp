#include <cmath>

float triangle_area(float a, float b, float c) {
    if (a + b > c && a + c > b && b + c > a) {
        float s = (a + b + c) / 2;
        return std::round(std::pow(s * (s - a) * (s - b) * (s - c), 0.5)) / 100.0f;
    } else {
        return -1.0f;
    }
}