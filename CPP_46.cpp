int fib4(int n) {
    if (n <= 1) return 0;
    int a = 0, b = 0, c = 2, d = 0;
    for (int i = 3; i <= n; ++i) {
        int t = a + b + c + d;
        a = b;
        b = c;
        c = d;
        d = t;
    }
    return d;
}