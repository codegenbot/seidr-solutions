int largest_prime_factor(int n) {
    while (n % 2 == 0) {
        n /= 2;
    }

    for (int i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            n /= i;
        }
    }

    return n;
}