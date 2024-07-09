```cpp
#include <iostream>
#include <cmath>

float triangle_area(float a, float b, float c) {
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        float s = (a + b + c) / 2.0;
        return round((sqrt(s * (s - a) * (s - b) * (s - c))) * 100.0) / 100.0;
    } else {
        return -1.0f;
    }
}

int main() {
    float side1, side2, side3;

    std::cout << "Enter the lengths of three sides of a triangle: ";
    std::cin >> side1 >> side2 >> side3;

    float area = triangle_area(side1, side2, side3);

    if (area != -1.0f) {
        std::cout << "The area of the triangle is: " << area << "\n";
    } else {
        std::cout << "These sides do not form a triangle.\n";
    }

    return 0;
}