int max_fill(vector<vector<int>> grid, int capacity) {
    int count = 0;
    for (int j = 0; j < grid[0].size(); ++j) {
        int cur_water = 0;
        for (int i = 0; i < grid.size(); ++i) {
            cur_water += grid[i][j];
        }
        count += (cur_water + capacity - 1) / capacity;
    }
    return count;
}