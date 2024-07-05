#include <vector>
#include <cmath>

bool is_prime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}

int prime_fib(int n) {
    std::vector<int> fib = {0, 1};
    std::vector<int> prime_fibs;
    int i = 2;
    while (prime_fibs.size() < n) {
        fib.push_back(fib[i-1] + fib[i-2]);
        if (is_prime(fib[i])) {
            prime_fibs.push_back(fib[i]);
        }
        i++;
    }
    return prime_fibs[n-1];
}