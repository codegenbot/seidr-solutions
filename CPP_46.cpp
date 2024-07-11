int a = 0, b = 0, c = 2, d = 0;
    if (n < 2) return b;
    if (n == 2) return c;
    for (int i = 3; i <= n; ++i) {
        d = a + b + c + d;
        a = b;
        b = c;
        c = d;
    }
    return d;
}