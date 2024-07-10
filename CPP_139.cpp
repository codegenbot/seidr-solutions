Here is the completed code:

long long special_factorial(int n){
    if(n <= 1) return 1;
    long long result = 1;
    for(long long i = n; i > 0; --i)
        result *= i;
    for(long long i = n-1; i > 0; --i)
        result *= special_factorial(i);
    return result;
}