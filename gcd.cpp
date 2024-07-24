#include <cmath>

int gcd(int a, int b) {
    if ((a == 0 || b == 0) || (a == 1 || b == 1)) {
        return abs(a + b);
    }
    
    a = abs(a);
    b = abs(b);
    
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    
    return a;
}