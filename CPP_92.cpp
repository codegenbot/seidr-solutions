#include <cassert>

bool any_int(float a, float b, float c) {
    if (a == int(a) && b == int(b) && c == int(c)) {
        return (a == b + c || a == c + b || b == a + c || b == c + a || c == a + b || c == b + a);
    }
    return false;
}

int main() {
    assert(any_int(3.01, 4, 7) == false); 
    assert(any_int(1,2,3) == true); // Test case for three integers
    return 0;
}