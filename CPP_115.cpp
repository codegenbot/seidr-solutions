int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    vector<int> bucket(n, 0);
    int ans = 0;
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < grid[i].size(); ++j) {
            if (grid[i][j]) {
                bucket[i] += 1;
            }
        }
    }
    
    while (true) {
        bool changed = false;
        vector<int> new_bucket(bucket);
        
        for (int i = 0; i < n; ++i) {
            int to_fill = min(capacity, bucket[i]);
            if (to_fill > 0) {
                changed = true;
                new_bucket[i] -= to_fill;
                capacity -= to_fill;
            }
        }
        
        if (!changed) break;
        
        bucket = new_bucket;
    }
    
    return ans + n - count(bucket.begin(), bucket.end(), 0);
}