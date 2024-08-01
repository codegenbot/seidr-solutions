int fib4(int n) {
    if (n < 0 || n > 3)
        return -1;

    int fib4[5] = {0, 0, 2, 0};
    for (int i = 4; i <= n; i++) {
        int sum = fib4[i-1];
        sum += fib4[i-2];
        sum += fib4[i-3];
        fib4[i%4] = sum;
    }
    return fib4[n%4];
}