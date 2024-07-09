bool is_multiply_prime(int a) {
    for (int i = 2; i <= 100; i++) {
        int product = 1;
        for (int j = 2; j <= 100; j++) {
            if (isPrime(i * j)) {
                product *= i * j;
                if (product == a) return true;
            }
            if (product > a) break;
        }
    }
    return false;
}

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}