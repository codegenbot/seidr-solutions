#include <cmath>

int findGCD(int a, int b) {
    if (b == 0) return labs(a);
    while (b != 0) {
        int temp = b;
        b = labs(a) % labs(b);
        a = temp;
    }
    return labs(b); 
}