#include <iostream>
#include <cassert>

int prime_fib(int n) {
    int a = 2, b = 3, c;
    for (int i = 3; i <= n; ++i) {
        c = a + b;
        a = b;
        b = c;
        while (true) {
            int is_prime = 1;
            for (int j = 2; j * j <= c; ++j) {
                if (c % j == 0) {
                    is_prime = 0;
                    break;
                }
            }
            if (is_prime) {
                break;
            }
            c++;
        }
    }
    return c;
}

int main() {
    int n = 10;
    assert(prime_fib(n) == 433494437);
    
    return 0;
}