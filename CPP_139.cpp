long long special_factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= 1LL * i;
        if (i > 1)
            for (int j = 2; j <= i; ++j)
                result /= 1LL * j;
    }
    return result;
}