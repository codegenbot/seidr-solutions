```
#include <iostream>
#include <cassert>
#include <cmath>

float triangle_area(float a, float h) {
    return (a * h) / 2;
}

int main() {
    assert(abs(triangle_area(10, 8) - 40.0) < 1e-4);
    std::cout << "The area of the triangle is: " << triangle_area(10, 8) << std::endl;
    return 0;
}
```