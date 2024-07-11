#include <iostream>
#include <vector>

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
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
        int next = fib[i - 1] + fib[i - 2];
        if (isPrime(next)) {
            fib.push_back(next);
        }
        ++i;
    }
    
    return fib.back();
}

int main() {
    int n;
    std::cin >> n;
    std::cout << prime_fib(n) << std::endl;
    return 0;
}