vector<int> f(int n) {
    vector<int> res(n);
    res[0] = 1;
    for(int i = 1; i < n; i++) {
        if (i % 2 == 0) {
            int fact = 1;
            for(int j = 1; j <= i; j++) {
                fact *= j;
            }
            res[i] = fact;
        } else {
            int sum = 0;
            for(int j = 1; j <= i; j++) {
                sum += j;
            }
            res[i] = sum;
        }
    }
    return res;
}