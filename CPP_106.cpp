vector<int> f(int n){
    vector<int> result(n);
    int factorial = 1;
    int sum = 0;
    for(int i=1; i<=n; i++){
        if(i % 2 == 0){
            factorial *= i;
            result[i-1] = factorial;
        } else {
            sum += i;
            result[i-1] = sum;
        }
    }
    return result;
}