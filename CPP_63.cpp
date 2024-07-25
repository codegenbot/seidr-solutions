int fibfib(int n) {
    if (n <= 1) return 0;
    if (n == 2) return 1;
    int a = 0, b = 0, c = 1;
    for (int i = 3; i <= n; ++i) {
        int d = a + b + c;
        a = b;
        b = c;
        c = d;
    }
    return c;
}