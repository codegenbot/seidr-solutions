```c
#include <cmath>
#include <cassert>

int main() {
    assert(std::abs(triangle_area(10, 8) - 40.0)<1e-4);
}