Here is the completed code:

long long special_factorial(int n){
    long long result = 1;
    for(int i = n; i > 0; i--){
        result *= factorial(i);
    }
    return result;
}

long long factorial(int n){
    if(n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n-1);
}