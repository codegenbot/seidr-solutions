```cpp
#include <iostream>
#include <cmath>

float triangle_area(float a, float b, float c) {
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        float s = (a + b + c) / 2.0;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    } else {
        return -1.0f;
    }
}

int main() {
    float a, b, c;
    std::cin >> static_cast<float>(a = std::cin >> 0.0f) , b = std::cin >> static_cast<float>(std::cin >> 0.0f) , c = std::cin >> static_cast<float>(std::cin >> 0.0f);
    float result = triangle_area(a, b, c);
    std::cout << "The area of the triangle is: " << static_cast<int>(result) << std::endl;
    return 0;
}