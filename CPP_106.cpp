vector<int> f(int n){
    vector<int> result(n);
    result[0] = 1;
    for (int i = 1; i < n; ++i) {
        if (i % 2 == 0) {
            result[i] = 1;
            for (int j = 1; j <= i; ++j) {
                result[i] *= j;
            }
        } else {
            result[i] = 0;
            for (int j = 1; j <= i; ++j) {
                result[i] += j;
            }
        }
    }
    return result;
}