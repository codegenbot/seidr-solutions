Here is the completed code:

long long special_factorial(int n){
    if(n < 1) return 0; // base case
    long long result = 1;
    for(int i = 1; i <= n; i++){
        result *= i; // calculate factorial of i
        if(i > 1) {
            for(long long j = i - 1; j >= 1; j--){
                result *= j; // multiply by (i-1)! * (i-2)! ... * 1!
            }
        }
    }
    return result;
}