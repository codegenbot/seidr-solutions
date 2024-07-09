#include <cmath>

float triangle_area(float a, float c) {
    if (a + b > c && a + c > b && b + c > a) {
        float s = (a + b + c) / 2;
        return std::round(std::pow(s, 0.5)*s*(s-a)*(s-b)*(s-c)) * 100.0 / 100.0;
    } else {
        return -1.0f;
    }
}