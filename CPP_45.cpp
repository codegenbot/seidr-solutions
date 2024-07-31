#include <cmath>

float triangle_area(float a, float h) {
    return (a * std::absf(h)) / 2.0f;
}

int main() {
    assert(std::abs(triangle_area(10, 8) - 40.0)<1e-4);
    return 0;
}