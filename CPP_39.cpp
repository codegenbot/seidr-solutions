int prime_fib(int n) {
    int fib = 0, a = 1, b = 1;
    for (int i = 1; ; i++) {
        if (i == n) return b;
        fib = a + b;
        a = b;
        b = fib;
        if (!isPrime(fib)) continue;
    }
}

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}