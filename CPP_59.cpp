int largest_prime_factor(int n) {
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            n /= i;
        }
    }
    if (n > 1) return n; 
    else return largest_prime_factor(n);