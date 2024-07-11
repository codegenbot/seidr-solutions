int prime_fib(int n) {
    int a = 0, b = 1;
    for (int i = 0; i < n; i++) {
        if (isPrime(b)) {
            return b;
        }
        int temp = a;
        a = b;
        b = temp + b;
    }
    return -1;
}

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}