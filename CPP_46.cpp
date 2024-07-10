int fib4(int n) {
    if (n < 0 || n > 12) return -1; // invalid input
    int a = 0, b = 0, c = 2, d = 0;
    for (int i = 4; i <= n; i++) {
        int temp = a + b + c + d;
        a = b; b = c; c = d; d = temp;
    }
    return d;
}