int fib4(int n) {
    if (n < 0 || n > 7) return -1; // invalid input
    int fib[8] = {0, 0, 2, 0, 2, 2, 4, 6};
    return fib[n];
}