int fib(int n) {
    if (n <= 1) return n;
    int a = 0, b = 1, result = 1;
    for (int i = 2; i <= n; i++) {
        result = a + b;
        a = b;
        b = result;
    }
    return result;
}