#include <cmath>
#include <cassert>

float triangle_area(float a, float h) {
    return (a * std::abs(h)) / 2.0f;
}