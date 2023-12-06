
```
#include <iostream>
#include <cmath>

float triangle_area(float a, float b, float c) {
    if (a + b > c && a + c > b && b + c > a) {
        return std::abs((a * b * 0.5));
    } else {
        return -1;
    }
}
```