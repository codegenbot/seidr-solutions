#include <iostream>
#include <vector>

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
    std::vector<int> fibonacci = {1, 1};
    int i = 2;
    while (true) {
        int nextFib = fibonacci[i - 1] + fibonacci[i - 2];
        if (isPrime(nextFib)) {
            fibonacci.push_back(nextFib);
            if (fibonacci.size() == n) {
                return nextFib;
            }
        }
        i++;
    }
}

int main() {
    int n;
    std::cin >> n;
    std::cout << prime_fib(n) << std::endl;
    return 0;
}