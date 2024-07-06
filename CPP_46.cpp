int fib4(int n) {
    if (n < 0 || n % 4 != 0) {
        return -1;
    }
    int a = 0, b = 2, c = 2, d = 2;
    for (int i = 4; i <= n; i += 4) {
        int t = a + b + c + d;
        a = b;
        b = c;
        c = d;
        d = t;
    }
    return d;
}