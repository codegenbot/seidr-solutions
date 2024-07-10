#include <iostream>
#include <cmath>

bool any_int(float a, float b, float c) {
    if (round(a) == round(b) + round(c) || round(a) + round(b) == round(c)) {
        return true;
    }
    return false;
}

int main() {
    assert(any_int(3.01, 4, 7) == false);
    return 0;
}