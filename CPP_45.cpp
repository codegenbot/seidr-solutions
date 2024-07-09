#include <cmath>

float triangle_area(float a, float h) {
    if (a + h <= 0) {
        return -1; // invalid input
    }
    return (a * h) / 2.0f;
}