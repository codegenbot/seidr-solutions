Here is the solution:

long long special_factorial(int n){
    long long result = 1;
    for(int i=n; i>0; --i){
        result *= factorial(i);
    }
    return result;
}

long long factorial(int n){
    long long result = 1;
    for(int i=2; i<=n; ++i){
        result *= i;
    }
    return result;
}