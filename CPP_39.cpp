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
        return 0;
    }
    if (n == 1) {
        return 2;
    }

    int first = 1, second = 1, result = 0;
    for (int i = 3; i <= n + 1; i++) {
        result = first + second;
        first = second;
        second = result;
    }

    while (!isPrime(result)) {
        result++;
        while (!isPrime(result)) {
            result++;
        }
    }

    return result;
}

int main() {
    int n;
    std::cin >> n;
    std::cout << prime_fib(n) << std::endl;
    return 0;
}