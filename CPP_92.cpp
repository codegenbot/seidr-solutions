#include <cassert>
#include <cmath>

bool any_int(float a, float b, float c) {
    if (a == int(a) && b == int(b) && c == int(c)) {
        return (a == b + c || a == c + b || b == a + c || c == a + b);
    }
    return false;
}

int main() {
    assert(any_int(3.01, 4, 7) == false);
    return 0;
}