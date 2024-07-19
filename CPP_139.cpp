long long special_factorial(int n) {
    if(n == 0 || n == 1)
        return 1;
    long long result = 1;
    for(int i = n; i > 0; --i) {
        result *= 1LL * i * special_factorial(i - 1);
    }
    return result;
}