vector<int> f(int n){
    vector<int> result(n);
    int factorial = 1, sum = 0;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            factorial *= (i + 1);
            result[i] = factorial;
        } else {
            sum += (i + 1);
            result[i] = sum;
        }
    }
    return result;
}