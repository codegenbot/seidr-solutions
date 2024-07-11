bool hasPrimeFactor(int n, int start, int end) {
    for (int i = start; i <= end; ++i) {
        if (n % i == 0 && isPrime(i)) return true;
    }
    return false;
}

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2, s = sqrt(n); i <= s; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

bool is_multiply_prime(int a) {
    int start = 2, end = 30;
    while (start * end <= a) {
        if (a == start * end && hasPrimeFactor(a, start, end)) return true;
        ++end;
    }
    return false;
}