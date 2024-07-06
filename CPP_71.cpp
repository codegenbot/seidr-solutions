#include <cmath>
#include <cfloat>

float triangle_area(float a, float b, float c) {
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        float s = (a + b + c) / 2;
        return static_cast<float>(std::round(std::sqrt(s * (s - a) * (s - b) * (s - c)))) * 100.0 / 100.0;
    } else {
        return -1.0f;
    }
}