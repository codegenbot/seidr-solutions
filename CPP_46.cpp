int fib4(int n) {
    if (n < 0 || n % 3 == 1)
        return 0;
    int a = 2, b = 0, c = 0, d = 0;
    for (int i = 4; i <= n; i++) {
        d = a + b + c;
        a = b;
        b = c;
        c = d;
    }
    return d;
}