Here is the completed code:

long long special_factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * special_factorial(n - 1);
}