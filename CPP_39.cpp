#include <iostream>
#include <cmath>

bool is_prime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}

int prime_fib(int n) {
    if (n <= 0) return -1;
    if (n == 1) return 2;
    
    int a = 1, b = 1, c;
    for (int i = 3; i <= n; ++i) {
        c = a + b;
        while (!is_prime(c)) {
            c = a + b;
            a = b;
            b = c;
        }
        a = b;
        b = c;
    }
    return c;
}

int main() {
    int n;
    std::cin >> n;
    std::cout << prime_fib(n) << std::endl;
    return 0;
}