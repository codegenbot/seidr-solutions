#include <stdio.h>
#include <cmath> // For abs function
#include <cassert> // For assert function

float triangle_area(float a, float h) {
    return 0.5 * a * h;
}

int main() {
    float a, h;
    printf("Enter the length of the side: ");
    scanf("%f", &a);
    printf("Enter the height: ");
    scanf("%f", &h);
    float area = triangle_area(a, h);
    printf("The area of the triangle is: %.2f\n", area);

    // Assuming that the assert is part of debugging or testing
    assert (abs(triangle_area(10, 8) - 40.0) < 1e-4);

    return 0;
}