#include <iostream>
#include <cassert>

bool right_angle_triangle(float a, float b, float c) {
    if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
        return true;
    else
        return false;
}

int main() {
    assert(right_angle_triangle(2, 2, 10) == false);
    float side1, side2, side3;
    std::cout << "Enter the three sides of triangle (a, b, c): ";
    std::cin >> side1 >> side2 >> side3;
    if (right_angle_triangle(side1, side2, side3))
        std::cout << "Right-angled triangle." << std::endl;
    else
        std::cout << "Not a right-angled triangle." << std::endl;
}