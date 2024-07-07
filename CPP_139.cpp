Here is the completed code:

long long special_factorial(int n){
    if(n == 0) return 1;
    long long result = 1;
    for(int i = 1; i <= n; i++){
        result *= i;
        for(int j = i-1; j >= 1; j--){
            result *= j;
        }
    }
    return result;
}