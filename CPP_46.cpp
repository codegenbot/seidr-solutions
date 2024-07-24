Here is the completed code:

int fib4(int n) {
    if (n < 0 || n > 10) return -1; // error for invalid input
    int a = 0, b = 2, c = 0, d = 2;
    for (int i = 4; i <= n; ++i) {
        int temp = a + b + c + d;
        a = b;
        b = c;
        c = d;
        d = temp;
    }
    return d;
}