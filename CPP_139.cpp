long long special_factorial(int n) {
    if (n <= 1) return 1;
    long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= factorial(i);
    }
    return result;
}

long long factorial(int n) {
    if (n == 0) return 1;
    long long result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}