int fib4(int n) {
    if (n < 0 || n > 10) {
        return -1; // error handling for invalid input
    }
    int a = 0;
    int b = 0;
    int c = 2;
    int d = 0;
    for (int i = 4; i <= n; ++i) {
        int temp = a + b + c + d;
        d = c;
        c = b;
        b = a;
        a = temp;
    }
    return a;
}