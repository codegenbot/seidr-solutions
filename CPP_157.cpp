#include <cmath>

bool right_angle_triangle(float a, float b, float c) {
    return (pow(b, 2) + pow(c, 2)) == pow(a, 2);
}