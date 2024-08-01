bool is_multiply_prime(int a) {
    for (int i = 2; i <= 100; ++i) {
        int j = 2;
        while (j * j <= i) {
            if (i % j == 0) {
                int k = i / j;
                if (k != j && isPrime(k)) {
                    int l = k / j;
                    if (l != k && l != j && isPrime(l)) {
                        int m = l / j;
                        if (m != l && m != k && m != j && isPrime(m)) {
                            return true;
                        }
                    }
                } else if (isPrime(k)) {
                    return true;
                }
            }
            ++j;
        }
    }
    return false;
}

bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0)
            return false;
    }
    return true;
}