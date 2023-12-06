```
#include <iostream>

float triangle_area(float a, float h) {
    return (a * h) / 2;
}

int main() {
    std::cout << "Enter the length of the base and height of the triangle: ";
    float a, h;
    std::cin >> a >> h;
    if (abs(triangle_area(a, h) - 40.0) < 1e-4) {
        std::cout << "The area of the triangle is: " << triangle_area(a, h) << std::endl;
    } else {
        std::cout << "The given values are not correct!" << std::endl;
    }
    return 0;
}
```