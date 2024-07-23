#include <iostream>

int fib(int n) {
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int prime_fib(int n) {
    int count = 0, i = 0;
    while (count < n) {
        if (isPrime(fib(i)))
            ++count;
        ++i;
    }
    return fib(i - 1);
}

int main() {
    int n;
    std::cin >> n;
    std::cout << prime_fib(n) << std::endl;
    return 0;
}