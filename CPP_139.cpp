long long special_factorial(int n) {
    if(n <= 1)
        return 1;
    long long result = 1;
    for(int i = n; i > 0; --i) {
        long long multiplier = 1;
        for(int j = i - 1; j > 0; --j) {
            multiplier *= j;
        }
        result *= (long long)i * multiplier;
    }
    return result;
}