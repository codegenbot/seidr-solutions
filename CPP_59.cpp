int largest_prime_factor(int n) {
    int max = 1;
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            max = i;
            n /= i;
        }
    }
    if (n > 1)
        max = n;
    return max;
}