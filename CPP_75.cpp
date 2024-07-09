Here is the solution:

bool is_multiply_prime(int a) {
    for (int i = 2; i <= sqrt(a); i++) {
        int temp = a / i;
        while (temp % i == 0) {
            if (!isPrime(temp)) return false;
            temp /= i;
        }
    }
    return true;
}

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}