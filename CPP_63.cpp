int a = 0, b = 0, c = 1, d;
    for (int i = 3; i <= n; i++) {
        d = a + b + c;
        a = b;
        b = c;
        c = d;
    }
    return (n == 0 || n == 1) ? 0 : c;
}