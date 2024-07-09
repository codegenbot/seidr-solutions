```c++
#include <cmath>
#include <cassert>

int triangle_area(int a, int b, int c) {
    int s = (a + b + c) / 2;
    return abs((s*(s-a)*(s-b)*(s-c))/144);
}

int main() {
    assert(abs(triangle_area(2, 2, 10) + 1) < 0.01);
    return 0;
}