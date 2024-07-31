#include <iostream>
#include <cassert>

bool any_int(double a, double b, double c) {
    return (int)a == a && (int)b == b && (int)c == c && (a == b + c || b == a + c || c == a + b);
}

int main() {
    assert(any_int(3.01, 4, 7) == false);
    
    return 0;
}