int largest_prime_factor(int n) {
    int factor = 2;
    int largest_factor = 1;
    while (n > 1) {
        if (n % factor == 0) {
            n /= factor;
            largest_factor = factor;
            while (n % factor == 0) {
                n /= factor;
            }
        }
        factor++;
    }
    return largest_factor;
}