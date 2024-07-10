int fib4(int n) {
    if (n <= 3) return 0;
    int a = 2, b = 0, c = 0, d = 0;
    for (int i = 4; i <= n; ++i) {
        int temp = a + b + c + d;
        d = c;
        c = b;
        b = a;
        a = temp;
    }
    return a;
}