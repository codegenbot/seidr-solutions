int a = 0, b = 0, c = 2, d = 0, e;
    if (n < 3) return n == 2 ? 2 : 0;
    for (int i = 3; i <= n; ++i) {
        e = a + b + c + d;
        a = b;
        b = c;
        c = d;
        d = e;
    }
    return e;
}