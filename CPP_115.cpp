Here is the completed code:

int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int water = 0;
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] == 1) {
                water++;
            }
        }
        while (water > 0) {
            int min_bucket_water = min(water, capacity);
            water -= min_bucket_water;
            ans += min_bucket_water / capacity + (min_bucket_water % capacity != 0);
        }
    }
    return ans;
}