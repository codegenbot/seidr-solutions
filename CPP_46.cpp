int fib4(int n) {
    if (n < 0 || n > 100) {
        return -1; // error handling for invalid inputs
    }
    int f[] = {0, 0, 2, 0};
    for (int i = 4; i <= n; i++) {
        int sum = f[i-1] + f[i-2] + f[i-3] + f[i-4];
        for (int j = 1; j < 4; j++) {
            f[j-1] = f[j];
        }
        f[3] = f[2];
        f[2] = sum;
    }
    return f[n];
}