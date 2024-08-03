#include <iostream>

bool any_int(double a, int b, int c) {
    if((int)a == b + c || (int)b == a + c || (int)c == a + b)
        return true;
    else
        return false;
}

int main() {
    assert(any_int(3.01, 4, 7) == false);

    return 0;
}