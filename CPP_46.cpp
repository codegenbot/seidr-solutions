int a = 0, b = 0, c = 2, d = 0, e;
    for (int i = 4; i <= n; ++i) {
        e = a + b + c + d;
        a = b;
        b = c;
        c = d;
        d = e;
    }
    return d;
}