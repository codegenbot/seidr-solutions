pair<vector<int>, vector<int>> cutVector(vector<int>& v) {
    sort(v.begin(), v.end());
    
    int n = v.size();
    if (n % 2 == 0) {
        int mid = n / 2;
        return {{v.begin(), v.begin() + mid}, {v.begin() + mid, v.end()}};
    } else {
        int min_diff = INT_MAX; 
        for (int i = 1; i < n; ++i) {
            int diff = v[i - 1] - v[i];
            if (diff < min_diff) {
                min_diff = diff;
                break; 
            }
        }
        int mid_idx = find(v.begin(), v.end(), v[0] + min_diff) - v.begin();
        return {{v.begin(), v.begin() + mid_idx}, {v.begin() + mid_idx, v.end()}};
    }
}