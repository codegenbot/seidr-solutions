#include <iostream>
#include <vector>

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
    if (n == 1) {
        return 2;
    }
    if (n == 2) {
        return 3;
    }
    std::vector<int> fib = {2, 3};
    int i = 2;
    while (fib.size() < n) {
        int next_fib = fib[i - 1] + fib[i - 2];
        if (isPrime(next_fib)) {
            fib.push_back(next_fib);
        }
        ++i;
    }
    return fib.back();
}

int main() {
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;
    std::cout << prime_fib(n) << std::endl;
    return 0;
}