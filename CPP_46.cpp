Here is the solution:

int fib4(int n) {
    if (n < 0 || n > 10) return -1; // invalid input
    int fib[5] = {0, 0, 2, 0, 2}; // base cases
    for (int i = 5; i <= n; i++) {
        int sum = (fib[i-1] + fib[i-2] + fib[i-3] + fib[i-4]) % 10;
        fib[i%4] = sum;
    }
    return fib[n%4];
}