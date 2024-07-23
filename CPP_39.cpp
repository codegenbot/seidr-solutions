int prime_fib(int n) {
    int a = 0, b = 1, fib = 0;
    for (int i = 1; ; i++) {
        if (i == n) {
            return b;
        }
        fib = a + b;
        a = b;
        b = fib;
        bool isPrime = true;
        for (int j = 2; j * j <= fib; j++) {
            if (fib % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (!isPrime) {
            continue;
        }
        return b;
    }
}