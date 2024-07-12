#include <cassert>

bool any_int(float a, float b, float c) {
    return (a == b + c || a == b - c || a == c + b || a == c - b) && 
           (int(a) == a) && (int(b) == b) && (int(c) == c);
}

int main() {
    assert(any_int(3.01, 4, 7) == false);
    return 0;
}