int maxEven(int n){
    int result = 0;
    for(int i = 2; i <= n; i++){
        if(i % 2 == 0) result += i;
    }
    return result;
}