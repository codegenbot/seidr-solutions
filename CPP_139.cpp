long long special_factorial(int n){
    long long result = 1;
    for(int i = 1; i <= n; ++i){
        result *= i;
    }
    return result;
}