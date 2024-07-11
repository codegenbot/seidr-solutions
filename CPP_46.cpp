int fib4(int n) {
    int a = 0, b = 0, c = 2, d = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 4 == 1)
            a = b;
        else if (i % 4 == 2)
            b = c;
        else if (i % 4 == 3)
            c = d + c;
        else
            d = a + b + c;
    }
    return d;
}