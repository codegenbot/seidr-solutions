#include <cmath>

float triangle_area(int a, int h) {
    return (a * h) / 2.0f;
}

int main() {
    assert(std::abs(triangle_area(10, 8) - 40.0) < 1e-4);
    return triangle_area(20,15); 
}