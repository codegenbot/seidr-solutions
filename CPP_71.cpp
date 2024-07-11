```
#include <cassert>
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
    float a, b, c;
    std::cout << "Enter the lengths of three sides of a triangle: ";
    std::cin >> a >> b >> c;
    if (std::abs(triangle_area(a, b, c)) < 0.01) {
        std::cout << "The area of the triangle is: " << triangle_area(a, b, c) << std::endl;
    } else {
        std::cout << "These lengths do not form a valid triangle." << std::endl;
    }
}