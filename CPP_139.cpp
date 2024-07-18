long long special_factorial(int n){
    long long result = 1;
    long long factorial = 1;
    
    for(int i = 1; i <= n; ++i){
        factorial *= i;
        result *= factorial;
    }
    
    return result;
}