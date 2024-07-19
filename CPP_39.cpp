#include <iostream>
#include <vector>

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
    std::vector<int> fib = {0, 1};
    while (fib.size() <= n) {
        fib.push_back(fib[fib.size() - 1] + fib[fib.size() - 2]);
    }
    for (int i = 2; i < fib.size(); ++i) {
        if (is_prime(fib[i])) {
            --n;
            if (n == 0) {
                return fib[i];
            }
        }
    }
    return -1;
}

int main() {
    int n;
    std::cin >> n;
    std::cout << prime_fib(n) << std::endl;
    return 0;
}