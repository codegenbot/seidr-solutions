#include <cmath>

float triangle_area(float a, float h) {
    if (a == 0 || h == 0)
        return 0;
    else
        return (a * h) / 2.0f;
}