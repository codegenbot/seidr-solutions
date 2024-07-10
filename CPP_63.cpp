int fibfib(int n) {
    if (n == 0 || n == 1 || n == 2) {
        return n;
    }
    int a = 0, b = 1, c = 2, d;
    for (int i = 3; i <= n; ++i) {
        d = a + b + c;
        a = b;
        b = c;
        c = d;
    }
    return c;
}