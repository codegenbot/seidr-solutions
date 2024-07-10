int largest_prime_factor(int n) {
    int factor = 2;
    int largest_factor = 1;
    while (factor * factor <= n) {
        if (n % factor == 0) {
            n /= factor;
            largest_factor = factor;
            while (n % factor == 0) {
                n /= factor;
            }
        }
        factor++;
    }
    if (n > 1 && n > largest_factor) {
        largest_factor = n;
    }
    return largest_factor;
}