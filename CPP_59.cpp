```
int largest_prime_factor(int n) {
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            n /= i;
        }
    }
    if (n > 1) return n; // If 'n' is a prime number, return it
    else return largest_prime_factor(n); // Otherwise, continue checking for larger factors
}