#include <iostream>
#include <cmath>

float triangle_area(float a, float b, float c) {
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        float s = (a + b + c) / 2.0;
        return std::round((sqrt(s * (s - a) * (s - b) * (s - c))) * 100.0) / 100.0;
    } else {
        return -1.0f;
    }
}

int main() {
    float side_a, side_b, side_c;
    
    std::cout << "Enter the lengths of sides a, b and c: ";
    std::cin >> side_a >> side_b >> side_c;

    float area = triangle_area(side_a, side_b, side_c);

    if (area == -1.0f) {
        std::cout << "The input values do not form a valid triangle." << std::endl;
    } else {
        std::cout << "Area of the triangle is: " << area << std::endl;
    }

    return 0;
}