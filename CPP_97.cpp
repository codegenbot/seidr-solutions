#include <iostream>
#include <cassert>
#include <cmath>

int multiply(int a, int b) {
    if (a == 0 || b == 0)
        return 0;
        
    return abs((a % 10) * (b % 10));
}

int main() {
    assert(multiply(0, 0) == 0);
    // Add more test cases if needed
    return 0;
}