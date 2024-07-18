#include <iostream>
#include <cmath>

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}

int prime_fib(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 2;
    if (n == 2) return 3;

    int a = 2, b = 3, c;
    int count = 2;

    while (count < n) {
        c = a + b;
        a = b;
        b = c;

        if (isPrime(c)) {
            count++;
        }
    }

    return c;
}

int main() {
    int n;
    std::cin >> n;
    std::cout << prime_fib(n) << std::endl;
    return 0;
}