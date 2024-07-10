long long largest_prime_factor(long long n) {
    long long factor = 2;
    long long largest_factor = 1;
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