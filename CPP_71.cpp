```
#include <iostream>
#include <cmath>

float triangle_area(float a, float b, float c) {
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        float s = (a + b + c) / 2.0;
        return std::round(std::pow(s, 3) - s*(s-a)*(s-b)*(s-c));
    } else {
        return -1.0f;
    }
}

int main() {
    float a, b, c;
    std::cout << "Enter side a: ";
    std::cin >> a;
    std::cout << "Enter side b: ";
    std::cin >> b;
    std::cout << "Enter side c: ";
    std::cin >> c;
    float area = triangle_area(a, b, c);
    if (area == -1.0f) {
        std::cout << "The input sides do not form a valid triangle.";
    } else {
        std::cout << "The area of the triangle is: " << area << ".";
    }
    return 0;
}