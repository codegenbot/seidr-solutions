#include <iostream>
using namespace std;

float triangle_area(float a, float b, float c) {
    float s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    cout << "Enter sides of triangle: ";
    float side1, side2, side3;
    cin >> side1 >> side2 >> side3;

    assert(abs(triangle_area(side1, side2, side3)) < 0.01);
    float result = triangle_area(side1, side2, side3);
    cout << "The area of the triangle is: " << result << endl;
    return 0;
}