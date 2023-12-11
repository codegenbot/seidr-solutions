```cpp
#include <iostream>
#include <cassert>
#include <cmath>

float triangle_area(float a, float h) {
    return (a * h) / 2;
}

int main() {
    // Initialize the string with a valid value
    std::string str = "Hello World!";
    assert (abs(triangle_area(10, 8) - 40.0)<1e-4);
    return 0;
}
```