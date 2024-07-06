int fib4(int n) {
    if (n <= 1) return 0;
    int prev3 = 0, prev2 = 1, prev1 = 1;
    for (int i = 4; i <= n; ++i) {
        int next = prev3 + prev2 + prev1;
        prev3 = prev2;
        prev2 = prev1;
        prev1 = next;
    }
    return prev1;
}