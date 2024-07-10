pair<vector<int>, vector<int>> cutVector(vector<int>& v) {
    int n = v.size();
    long long total_sum = accumulate(v.begin(), v.end(), 0LL);
    
    pair<long long, long long> prefix_sum = {{0LL}, {accumulate(v.begin(), v.end(), 0LL)}};
    
    long long min_diff = LLONG_MAX;
    vector<int> left, right;
    
    for (int i = 0; i < n; ++i) {
        if (prefix_sum.second - prefix_sum.first >= total_sum / 2) {
            long long diff = abs(total_sum - 2 * prefix_sum.second);
            min_diff = min(min_diff, diff);
            left = {begin(v), begin(v) + i};
            right = {end(v) - (n - i - 1), end(v)};
        }
    }
    
    return {{left}, {right}};
}