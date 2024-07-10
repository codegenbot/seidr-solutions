#include <cmath>
#include <iostream>

float triangle_area(float a, float b, float c) {
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        float s = (a + b + c) / 2.0;
        return round((sqrt(s * (s - a) * (s - b) * (s - c))) * 100.0) / 100.0;
    } else {
        std::cerr << "Invalid input: the sides do not form a triangle." << std::endl;
        return -1.0f;
    }
}

int main() {
    float a, b, c;
    std::cout << "Enter three side lengths of a triangle (in cm): ";
    std::cin >> a >> b >> c;
    std::cout << "The area is: " << triangle_area(a, b, c) << " square centimeters." << std::endl;
    return 0;
}