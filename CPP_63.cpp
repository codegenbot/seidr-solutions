int fibfib(int n) {
    if (n == 0 || n == 1)
        return 0;
    else if (n == 2)
        return 1;
    else {
        int a = 0, b = 0, c = 1, d = 1, e = 1;
        for (int i = 3; i <= n; i++) {
            e = a + b + c;
            a = b;
            b = c;
            c = e;
        }
        return e;
    }
}