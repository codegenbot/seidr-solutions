#include <iostream>
#include <cassert>

int fib(int n) {
    if (n == 0 || n == 1) {
        return 0;
    } else if (n == 2) {
        return 1;
    }
    
    int a = 0, b = 0, c = 1, result = 0;
    
    for (int i = 3; i <= n; ++i) {
        result = a + b + c;
        a = b;
        b = c;
        c = result;
    }
    
    return result;
}

int main() {
    assert(fib(14) == 927);
    return 0;
}