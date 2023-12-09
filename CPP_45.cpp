```
#include <iostream>
#include <cmath>

float calculateTriangleArea(float a, float h) {
    return (a * h) / 2;
}

int main() {
    float a, h;
    std::cout << "Enter the length of side: ";
    std::cin >> a;
    std::cout << "Enter the height: ";
    std::cin >> h;
    std::cout << "The area of the triangle is: " << calculateTriangleArea(a, h) << std::endl;
    return 0;
}
```