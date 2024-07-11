long long result = 1;
    for(int i = 1; i <= n; i++){
        long long factorial = 1;
        for(int j = i; j >= 1; j--){
            factorial *= j;
        }
        result *= factorial;
    }
    return result;
}