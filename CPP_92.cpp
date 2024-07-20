```cpp
#include <cmath>
#include <cassert>

bool any_int(float a, float b, float c) {
    if (abs(a - (b + c)) < 0.0001) return true;
    if (abs(b - (a + c)) < 0.0001) return true;
    if (abs(c - (a + b)) < 0.0001) return true;
    return false;
}

int main() {
    assert(any_int(3.01, 4, 7) == false);
    // Your code here
}