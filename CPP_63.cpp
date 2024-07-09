#include <cassert>

int fibfib(int n) {
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
    assert(fibfib(14) == 927);
    return 0;
}