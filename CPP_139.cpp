Here is the solution:

long long special_factorial(int n){
    if(n <= 1)
        return 1;
    long long result = 1;
    for(int i = n; i > 0; --i){
        result *= (long long)i;
        if(i > 1)
            for(int j = i - 1; j > 0; --j)
                result *= (long long)j;
    }
    return result;
}