#include <cmath>
#include <cassert>

float triangle_area(float a, float h) {
    float area = 0.5 * a * h;
    return area;
}

int main() {
    assert(std::abs(triangle_area(10, 8) - 40.0) < 1e-4);

    return 0;
}