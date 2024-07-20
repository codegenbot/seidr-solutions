int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int total_water = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < grid[0].size(); j++) {
            if (grid[i][j] == 1) {
                total_water += 1;
            }
        }
    }

    int max_bucket_down = -(-total_water / capacity);
    return max_bucket_down;
}