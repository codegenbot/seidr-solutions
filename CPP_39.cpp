#include <iostream>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int prime_fib(int n) {
    int a = 1, b = 1;
    int count = 2;
    while (count < n) {
        int c = a + b;
        a = b;
        b = c;
        if (isPrime(b)) {
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