#include <cmath>
#include <assert.h>

float triangle_area(int a, int h) {
    return (a * h) / 2.0f;
}

int main() {
    assert(abs(triangle_area(10, 8) - 40.0)<1e-4);
}