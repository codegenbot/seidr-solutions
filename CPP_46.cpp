int a = 0, b = 0, c = 2, d = 0, temp;
    if (n < 3) return n == 2 ? c : 0;
    for (int i = 3; i <= n; ++i) {
        temp = d + c + b + a;
        a = b;
        b = c;
        c = d;
        d = temp;
    }
    return d;
}