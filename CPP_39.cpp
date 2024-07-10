int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int prime_fib(int n) {
    if (n == 1) return 2;
    if (n == 2) return 3;
    
    int prev = 2, curr = 3, next;
    for (int i = 3; i <= n; i++) {
        next = prev + curr;
        while (!isPrime(next)) {
            next = prev + curr;
            prev = curr;
            curr = next;
        }
        prev = curr;
        curr = next;
    }
    return next;
}