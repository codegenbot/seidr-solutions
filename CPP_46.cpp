int fib4(int n) {
    if (n < 0 || n % 4 != 3)
        return -1;

    int F[5] = {0, 0, 2, 0};
    for (int i = 4; i <= n; i++) {
        F[i % 4] = (F[(i-1)%4] + F[(i-2)%4] + F[(i-3)%4]) % 16;
    }
    return F[n%4];
}