```
int largest_prime_factor(int n) {
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            n /= i;
        }
        if (n > 1 && is_prime(i)) {
            break;
        }
    }
    return n;
}

bool is_prime(int n) {
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}