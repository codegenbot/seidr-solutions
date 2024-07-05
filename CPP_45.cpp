#include<stdio.h>
#include<math.h>
using namespace std;

float triangle_area(float a, float h) {
    return 0.5 * a * h;
}

int main() {
    float a, h;
    printf("Enter length of a side: ");
    scanf("%f", &a);
    printf("Enter height: ");
    scanf("%f", &h);
    printf("Area of the triangle: %.2f\n", triangle_area(a, h));
    return 0;
}