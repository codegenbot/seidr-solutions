int prime_fib(int n) {
    int a = 0, b = 1, fib = 1, count = 0;
    while (true) {
        if (fib > n) break;
        if (is_prime(fib)) {
            count++;
            if (count == n) return fib;
        }
        fib = a + b;
        int temp = a; a = b; b = temp + b;
    }
    return 0;
}

bool is_prime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}