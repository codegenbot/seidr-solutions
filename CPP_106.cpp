vector<int> f(int n){
    vector<int> result;
    int sum = 0;
    int fac = 1;
    
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            fac *= i;
            result.push_back(fac);
        } else {
            sum += i;
            result.push_back(sum);
        }
    }
    
    return result;
}