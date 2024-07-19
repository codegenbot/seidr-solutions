vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    long long total_sum = 0;
    
    vector<vector<int>> res(2);
    
    long long sum1 = 0; 
    long long min_diff = LLONG_MAX;
    int index = 1;
    
    for (int i = 0; i < n; i++) { 
        total_sum += v[i];
        
        if(i > 0) {
            long long diff = abs((total_sum - sum1));
            
            if ((sum1) == 0 || diff <= min_diff) {
                min_diff = diff;
                res[0].assign(v.begin(), v.begin() + i+1);
                res[1].assign(v.begin() + i, v.end());
            }
        }
        
        sum1 += v[i]; 
    }
    
    return res;
}