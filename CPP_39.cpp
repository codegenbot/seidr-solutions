#include <iostream>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
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

    int a = 1, b = 1, c, count = 2;

    while (count < n) {
        c = a + b;
        a = b;
        b = c;
        if (isPrime(c)) {
            count++;
        }
    }

    return b;
}

int main() {
    int n;
    std::cin >> n;
    std::cout << prime_fib(n) << std::endl;
    return 0;
}