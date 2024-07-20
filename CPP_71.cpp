#include <cmath>

float triangle_area(float a, float b, float c) {
    float s = (a + b + c) / 2;
    float area = std::sqrt(s * (s - a) * (s - b) * (s - c));
    return (a + b > c && a + c > b && b + c > a) ? round(area * 100) / 100 : -1;
}