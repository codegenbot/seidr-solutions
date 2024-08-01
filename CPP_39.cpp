#include <iostream>
#include <cmath>

int prime_fib() {
    int n;
    std::cin >> n;
    
    int a = 2, b = 3, c = 0;
    for (int i = 3; i <= n; ++i) {
        c = a + b;
        a = b;
        b = c;
        while (1) {
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