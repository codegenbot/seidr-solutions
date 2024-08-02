int prime_fib(int n) {
    int a = 0, b = 1, count = 0;
    while (true) {
        if ((b > n) || (count == n)) break;
        for (int i = 2; i * i <= b; i++) {
            if (b % i == 0) break;
        }
        if (i * i > b) return b;
        a = b;
        b = a + b;
        count++;
    }
    return -1; // or some other value to indicate that n is too large
}