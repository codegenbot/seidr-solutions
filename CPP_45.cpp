```
#include <iostream>
#include <cmath>

float triangle_area(float a, float h) {
    return (a * h) / 2;
}

int main() {
    std::cout << "The area of the triangle is: " << triangle_area(10, 8) << std::endl;
    return 0;
}
```