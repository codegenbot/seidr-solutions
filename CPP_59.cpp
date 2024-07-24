int largest_prime_factor(int n) {
    int factor = 0;
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            factor = i;
            n /= i;
        }
    }
    return factor;
}