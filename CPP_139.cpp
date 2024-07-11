long long special_factorial(int n){
    long long result = 1;
    for(int i = n; i > 0; i--){
        long long factorial = 1;
        for(int j = i; j > 0; j--){
            factorial *= j;
        }
        result *= factorial;
    }
    return result;
}