int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    vector<int> buckets(n, 0);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] == 1) {
                buckets[i] += 1;
            }
        }
    }
    
    int total_water = 0;
    int bucket_used = 0;
    
    while (total_water < accumulate(buckets.begin(), buckets.end(), 0)) {
        for (int i = 0; i < n; i++) {
            if (buckets[i] > 0) {
                if (bucket_used + capacity <= buckets[i]) {
                    bucket_used += capacity;
                } else {
                    bucket_used = buckets[i];
                }
                total_water += capacity;
                buckets[i] -= capacity;
            }
        }
    }
    
    return total_water / capacity;
}