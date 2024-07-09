int a = 0, b = 0, c = 2, d = 0, next;

    if (n == 0) return a;
    if (n == 1) return b;
    if (n == 2) return c;

    for (int i = 3; i <= n; ++i) {
        next = a + b + c + d;
        a = b;
        b = c;
        c = d;
        d = next;
    }

    return next;
}