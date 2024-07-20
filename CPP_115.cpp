Here is the completed code:

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
    
    int max_buckets = -1;
    for (int i = 0; i <= total_water / capacity; i++) {
        int water_left = total_water % capacity;
        int buckets_needed = 0;
        
        for (int j = 0; j < n; j++) {
            if (buckets[j] > 0) {
                buckets_needed += min(buckets[j], capacity - water_left);
                water_left += min(buckets[j], capacity - water_left);
                buckets[j] -= min(buckets[j], capacity - water_left);
            }
        }
        
        max_buckets = max(max_buckets, buckets_needed + i);
    }
    
    return max_buckets;
}