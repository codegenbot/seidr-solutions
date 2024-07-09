int fib4(int n) {
    if (n <= 1) return 0;
    int prev3 = 2, prev2 = 0, prev1 = 0;
    for (int i = 3; i <= n; ++i) {
        int nextFib = prev3 + prev2 + prev1;
        prev3 = prev2;
        prev2 = prev1;
        prev1 = nextFib;
    }
    return prev1;
}