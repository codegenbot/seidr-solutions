vector<int> f(int n){
    vector<int> result(n);
    int fact = 1;
    int sum = 0;
    
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            fact *= (i + 1);
            result[i] = fact;
        } else {
            sum += (i + 1);
            result[i] = sum;
        }
    }
    
    return result;
}