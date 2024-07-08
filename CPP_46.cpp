int fib4(int n) {
    if (n < 0 || n % 4 != 3)
        return -1;

    int a = 0;
    int b = 2;
    int c = 0;
    int d = 2;

    for (int i = 5; i <= n; ++i) {
        int temp = a + b + c + d;
        a = b;
        b = c;
        c = d;
        d = temp;
    }

    return d;
}