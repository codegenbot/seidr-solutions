int fib4(int n) {
    if (n == 0 || n == 1)
        return 0;

    int a = 0, b = 0, c = 2, d = 0;
    for (int i = 2; i <= n; ++i) {
        d = a + b + c;  
        a = b;
        b = c;
        c = d;
    }

    return d;
}