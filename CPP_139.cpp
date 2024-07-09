long long special_factorial(int n) {
    if(n <= 1)
        return 1;
    else
        return n * special_factorial(n-1);
}