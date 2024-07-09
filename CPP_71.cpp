```cpp
#include <cmath>
#include <cassert>
#include <cstddef>

int triangle_area(int a, int b, int c) {
    int s = (a + b + c) / 2;
    return abs((s*(s-a)*(s-b)*(s-c))/144);
}

int main() {
    return 0;
}