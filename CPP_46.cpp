int fib4(int n) {
    if (n < 0) return -1; // Error: negative index
    int f[] = {0, 0, 2, 0};
    for (int i = 4; i <= n; i++) {
        int sum = f[3] + f[2] + f[1];
        for (int j = 0; j < 3; j++)
            f[j] = f[j+1];
        f[3] = sum;
    }
    return f[n % 4];
}