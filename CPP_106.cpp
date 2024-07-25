vector<int> f(int n){
    vector<int> result;
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            int factorial = 1;
            for (int j = 1; j <= i; ++j) {
                factorial *= j;
            }
            result.push_back(factorial);
        } else {
            sum += i;
            result.push_back(sum);
        }
    }
    return result;
}