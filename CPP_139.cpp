long long special_factorial(int n){
    if(n == 1){
        return 1;
    }
    return n * special_factorial(n-1) * special_factorial(n-1);
}