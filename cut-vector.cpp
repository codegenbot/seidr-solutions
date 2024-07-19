vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res(2);
    
    long long sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++) { 
        if (abs(sum1 - sum2) > abs(sum2 - (sum1 + v[i])) || i == n-1) {
            res[0].insert(res[0].end(), v.begin() + i, v.end());
            break;
        } else {
            sum2 += v[i];
        }
    }
    
    res[1] = vector<int>(v.begin(), res[0].begin());
    return res;
}