vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    
    for (int i = 1; i < n; i++) {
        int sum1 = 0, sum2 = 0;
        for (int j = 0; j < i; j++) {
            sum1 += v[j];
        }
        for (int j = i; j < n; j++) {
            sum2 += v[j];
        }
        
        if (abs(sum1 - sum2) <= abs((sum1 + sum2) / 2 - sum1)) {
            res[0].insert(res[0].end(), v.begin(), v.begin() + i);
            res[1].insert(res[1].begin(), v.begin() + i, v.end());
            break;
        }
    }
    
    return res;
}