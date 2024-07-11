int max_fill(vector<vector<int>> grid, int capacity) {
    int count = 0;
    for (int j = 0; j < grid[0].size(); ++j) {
        int cur_water = 0;
        for (int i = 0; i < grid.size(); ++i) {
            cur_water += grid[i][j];
            if (cur_water >= capacity) {
                count += cur_water / capacity;
                cur_water %= capacity;
            }
        }
        count += (cur_water > 0);
    }
    return count;
}