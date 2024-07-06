#include <cmath>

float triangle_area(float a, float h) {
    if (a <= 0 || h <= 0) {
        throw std::runtime_error("Side length and height should be positive.");
    }
    return (std::abs(a) * std::abs(h)) / 2.0f;
}