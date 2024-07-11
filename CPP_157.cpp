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

    std::cout << "Input the lengths of three sides (a, b, c): ";
    float a, b, c;
    std::cin >> a >> b >> c;

    if (right_angle_triangle(a, b, c))
        std::cout << "The triangle is right-angled." << std::endl;
    else
        std::cout << "The triangle is not right-angled." << std::endl;
}