Here is the completed code:

long long special_factorial(int n){
    if(n == 1)
        return 1;
    else
        return (long long)n * special_factorial(n-1);
}