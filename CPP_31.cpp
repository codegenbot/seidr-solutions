bool is_prime(long long n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    for (long long i = 2; i * i <= n; i++) {
        if (i > 1 && n % i == 0) return false;
    }
    return true;