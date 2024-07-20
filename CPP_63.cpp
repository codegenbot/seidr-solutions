int fibfib(int n) {
    if (n <= 1) return 0;
    int a = 0, b = 0, c = 1;
    for (int i = 2; i <= n; ++i) {
        int temp = a + b + c;
        a = b;
        b = c;
        c = temp;
    }
    return c;
}