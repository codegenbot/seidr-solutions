#include <cmath>

int gcd(int a, int b) {
    if ((a == 0 || b == 0) || (a == 1 || b == 1)) {
        return std::abs(a + b);
    }
    
    a = std::abs(a);
    b = std::abs(b);
    
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    
    return a;
}