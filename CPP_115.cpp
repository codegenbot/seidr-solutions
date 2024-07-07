int max_fill(vector<vector<int>> grid, int capacity) {
    int ans = 0;
    int total_water = 0;
    
    for (auto row : grid) {
        total_water += accumulate(row.begin(), row.end(), 0);
    }
    
    while (total_water > 0) {
        total_water -= min(total_water, capacity);
        ans++;
        if (total_water > 0) {
            int water_removed = 0;
            for (auto row : grid) {
                int amount_to_remove = min(capacity, min(row.begin(), row.end()));
                row.assign(row.begin(), row.end() - 1, 0);
                water_removed += amount_to_remove;
                total_water -= amount_to_remove;
            }
        }
    }
    
    return ans;
}