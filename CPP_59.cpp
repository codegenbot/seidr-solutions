int largest_prime_factor(int n) {
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            n /= i;
        }
    }
    if (n > 1) return n; 
    else return 1; // Modified the code to handle the case when 'n' is 1.
}