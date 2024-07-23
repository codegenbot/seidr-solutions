int fib4(int n) {
    if (n < 0) return -1; 
    int a = 0, b = 1, c = 2;
    for (int i = 3; i <= n; ++i) {
        int sum = a + b + c;
        int temp = c;
        c = b;
        b = a;
        a = temp;
    }
    return a + b + c;
}