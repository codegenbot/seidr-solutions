```cpp
#include <cmath>
#include <assert.h>

bool any_int(float a, float b, float c);

bool any_int(float a, float b, float c) {
    if (abs(a - (b + c)) < 0.01 && abs(b - (a + c)) < 0.01 && abs(c - (a + b)) < 0.01) {
        return true;
    }
    return false;
}

int main() {
    assert(any_int(3.01, 4, 7) == false);
}