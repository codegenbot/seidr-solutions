int fib4(int n) {
    if (n < 0) return -1; // or throw an exception
    int f[] = {0, 0, 2, 0};
    for (int i = 4; i <= n; ++i) {
        int sum = f[i-1] + f[i-2] + f[i-3] + f[i-4];
        f[i%4] = sum;
    }
    return f[n%4];
}