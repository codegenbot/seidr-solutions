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

    return fabs(x*x - (y*y + z*z)) < 1e-6;
}

int main() {
    float a, b, c;
    printf("Enter the lengths of the triangle sides: ");
    scanf("%f %f %f", &a, &b, &c);

    if (right_angle_triangle(a, b, c)) {
        printf("The triangle is a right-angle triangle.\n");
    } else {
        printf("The triangle is not a right-angle triangle.\n");
    }

    return 0;
}