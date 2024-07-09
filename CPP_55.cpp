int fib(int n) {
    if (n <= 1) return n;
    int a = 0, b = 1;
    for (int i = 2; i <= n; i++) {
        int temp = a;
        a = b;
        b = temp + b; 
    }
    return b;
}