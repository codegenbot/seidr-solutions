#include <cstdio>
#include <cmath>
using namespace std;

bool right_angle_triangle(float a, float b, float c) {
    float x = fmax(a, fmax(b, c));
    float y, z;

    if (x == a) {
        y = b;
        z = c;
    } else if (x == b) {
        y = a;
        z = c;
    } else {
        y = a;
        z = b;
    }

    return fabs(x * x - (y * y + z * z)) < 1e-6;
}