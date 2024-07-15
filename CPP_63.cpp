#include <iostream>
#include <cassert>

int fib(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }
    
    int a = 0, b = 1, result = 0;
    
    for (int i = 2; i < n; ++i) {
        result = a + b;
        a = b;
        b = result;
    }
    
    return result;
}

int main() {
    assert(fib(14) == 377);
    return 0;
}