#include <cmath>

using namespace std;

bool right_angle_triangle(float a, float b, float c) {
    float maxSide = max(a, max(b, c));
    return (maxSide * maxSide == (a * a + b * b)) || (maxSide * maxSide == (b * b + c * c)) ||
           (maxSide * maxSide == (c * c + a * a));
}