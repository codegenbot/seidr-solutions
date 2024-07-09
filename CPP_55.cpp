int fib(int n) {
    if (n <= 1) return n;
    int a = 0, b = 1;
    for (int i = 2; i <= n; i++) {
        b = a + b; 
        a = b;
    }
    return b;
}