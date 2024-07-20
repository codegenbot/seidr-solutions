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
    if (n <= 0) {
        return -1;
    }
    if (n == 1) {
        return 2;
    }

    int prev = 1, curr = 1;
    for (int i = 3; i <= n; ++i) {
        int next = prev + curr;
        prev = curr;
        curr = next;
    }

    while (true) {
        if (isPrime(curr)) {
            return curr;
        }
        curr = prev + curr;
        prev = curr - prev;
    }
}

int main() {
    int n;
    std::cin >> n;
    std::cout << prime_fib(n) << std::endl;
    return 0;
}