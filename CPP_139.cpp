Here is the completed code:

long long special_factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; ++i) {
        if (i > 1) {
            for (int j = 2; j <= i; ++j) {
                result *= j;
            }
        } else {
            result = 1;
        }
    }
    return result;
}