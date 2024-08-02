Here is the completed code:

long long special_factorial(int n) {
    if (n == 1) return 1;
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i * special_factorial(i - 1);
    }
    return result;
}