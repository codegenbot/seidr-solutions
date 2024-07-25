int largest_prime_factor(int n) {
    int maxFactor = 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0) {
                n /= i;
            }
            if (i > maxFactor)
                maxFactor = i;
        }
    }
    return maxFactor;
}