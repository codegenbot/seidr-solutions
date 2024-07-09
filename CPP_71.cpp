```c++
#include <cmath>
#include <cassert>
#include <cstddef>

int triangle_area(int a, int b, int c) {
    int s = (a + b + c) / 2;
    return std::abs(std::sqrt(s*(s-a)*(s-b)*(s-c)));
}

int main() {
    assert(std::abs(triangle_area(2, 2, 10)) < 0.01);
    return 0;
}