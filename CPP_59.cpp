int largest_prime_factor(int n) {
    int factor = 2;
    int largestPrimeFactor = 0;
    while (n > factor) {
        if (n % factor == 0) {
            largestPrimeFactor = factor;
            n /= factor;
        } else {
            factor++;
        }
    }
    if (n > largestPrimeFactor) {
        largestPrimeFactor = n;
    }
    return largestPrimeFactor;
}