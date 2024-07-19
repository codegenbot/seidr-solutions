```cpp
#include <cmath>
#include <cassert>
#include <iostream>

float triangle_area(float a, float b, float c) {
    if (a + b > c && a + c > b && b + c > a) {
        float s = (a + b + c) / 2;
        return round((sqrt(s * (s - a) * (s - b) * (s - c))) * 100.0) / 100.0;
    } else {
        return -1.0f;
    }
}

int main() {
    float a, b, c;
    std::cin >> a >> b >> c;
    if (triangle_area(a, b, c) >= 0)
        std::cout << "The area of the triangle is: " << triangle_area(a, b, c) << std::endl;
    else
        std::cout << "These values do not form a valid triangle." << std::endl;
    return 0;
}