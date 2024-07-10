int prime_fib(int n) {
    if (n == 1) {
        return 2;
    }
    if (n == 2) {
        return 3;
    }
    int prev = 2, curr = 3, next;
    for (int i = 3; i <= n; i++) {
        next = prev + curr;
        while (!isPrime(next)) {
            next = prev + curr;
            prev = curr;
            curr = next;
        }
        if (i == n) {
            return next;
        }
        prev = curr;
        curr = next;
    }
    return -1;
}