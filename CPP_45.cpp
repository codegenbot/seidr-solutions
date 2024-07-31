#include <cmath>
#include <cassert>

float triangle_area(float a, float h) {
    return (a * std::abs(h)) / 2.0f;
}

int main() {
    assert(std::abs(triangle_area(10, 8) - 40.0)<1e-4);
}