```
#include <cmath>
#include <iostream>

float triangle_area(float a, float h) {
    return (a * h) / 2;
}

int main() {
    float result = triangle_area(10, 8);
    if (abs(result - 40.0) < 1e-4) {
        std::cout << "The area of the triangle is: " << result << std::endl;
    } else {
        std::cout << "The area of the triangle is not within the expected range." << std::endl;
    }
    return 0;
}
```