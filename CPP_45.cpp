```cpp
#include <cmath>
#include <cassert>

float triangle_area(float a, float h) {
    return 0.5 * a * h;
}

int main() {
    assert(abs(triangle_area(10, 8) - 40.0)<1e-4);
    return 0;
}