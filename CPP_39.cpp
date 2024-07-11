int prime_fib(int n) {
    int a = 0, b = 1;
    for (int i = 2; ; i++) {
        if (i == n) return b;
        int temp = a + b;
        a = b;
        b = temp;
        if (!is_prime(b)) continue;
    }
}

bool is_prime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}