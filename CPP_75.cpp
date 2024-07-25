bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

bool is_multiply_prime(int a) {
    if (a < 6) return false;
    for (int i = 2; i <= a / 3; i++) {
        if (is_prime(i) && is_prime(a / i) && is_prime(a / (i * (a / i)))) {
            return true;
        }
    }
    return false;
}