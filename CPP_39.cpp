#include <vector>

bool is_prime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

int prime_fib(int n) {
    std::vector<int> fib_primes;
    int a = 1, b = 1;
    while (fib_primes.size() < n) {
        int next = a + b;
        a = b;
        b = next;
        if (is_prime(b)) {
            fib_primes.push_back(b);
        }
    }
    return fib_primes[n - 1];
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", prime_fib(n));
    return 0;
}