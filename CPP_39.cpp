#include <iostream>

bool is_prime(int num) {
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
    if (n == 1) {
        return 2;
    }
    if (n == 2) {
        return 3;
    }
    int prev = 2, curr = 3;
    for (int i = 3; i <= n; ++i) {
        int next = prev + curr;
        while (!is_prime(next)) {
            next = prev + curr;
            prev = curr;
            curr = next;
        }
        prev = curr;
        curr = next;
    }
    return curr;
}

int main() {
    int n;
    std::cin >> n;
    std::cout << prime_fib(n) << std::endl;
    return 0;
}