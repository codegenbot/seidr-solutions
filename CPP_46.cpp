int fib4(int n) {
    if (n <= 3) return 0;
    int a = 0, b = 1, c = 1, d = 2;
    for (int i = 4; i <= n; ++i) {
        int temp = (a + 2*b) % 1000000007;
        a = b;
        b = c;
        c = d;
        d = temp;
    }
    return d;
}