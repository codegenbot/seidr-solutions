int largest_prime_factor(int n) {
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            n /= i;
        }
    }
    if (n > 1) return n;
    else {
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                n /= i;
                i = 2;
            }
        }
        return n;
    }
}