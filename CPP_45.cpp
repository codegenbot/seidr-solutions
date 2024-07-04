#include <stdio.h>

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
    return 0;
}
