```
#include <iostream>
#include <cmath>

float triangle_area(float a, float h) {
    return (a * h) / 2;
}

int main() {
    assert(abs(triangle_area(10, 8) - 40.0) < 1e-4);
    return 0;
}
```