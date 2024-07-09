int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    vector<int> buckets(n);
    int total_water = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] == 1) {
                total_water++;
                buckets[i]++;
            }
        }
    }
    
    int max_bucket_index = -1;
    int max_bucket_size = 0;
    
    for (int i = 0; i < n; i++) {
        if (buckets[i] > max_bucket_size) {
            max_bucket_size = buckets[i];
            max_bucket_index = i;
        }
    }
    
    int min_bucket_size = max_bucket_size;
    int steps = 0;
    
    while (total_water > 0) {
        for (int i = 0; i < n; i++) {
            if (i == max_bucket_index) {
                buckets[i] -= capacity;
                total_water -= capacity;
            } else if (buckets[i] > 0) {
                min_bucket_size = min(min_bucket_size, buckets[i]);
                steps++;
            }
        }
        
        for (int i = 0; i < n; i++) {
            if (buckets[i] == min_bucket_size) {
                buckets[i] -= capacity;
                total_water -= capacity;
            }
        }
    }
    
    return steps;
}