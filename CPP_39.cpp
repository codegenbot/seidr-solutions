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
    std::vector<int> fib = {0, 1};
    while (fib.size() <= n) {
        fib.push_back(fib[fib.size() - 1] + fib[fib.size() - 2]);
    }
    
    int primeFib = 0;
    for (int num : fib) {
        if (isPrime(num)) {
            primeFib = num;
            if (--n == 0) {
                break;
            }
        }
    }
    
    return primeFib;
}

int main() {
    int n;
    std::cin >> n;
    std::cout << prime_fib(n) << std::endl;
    return 0;
}