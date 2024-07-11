#include <iostream>
#include <cmath>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int prime_fib(int n) {
    if (n <= 0) {
        return -1;
    }
    
    int a = 2, b = 3, c;
    for (int i = 3; i <= n; i++) {
        c = a + b;
        while (!isPrime(c)) {
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