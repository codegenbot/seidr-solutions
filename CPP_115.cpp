int max_fill(vector<vector<int>> grid, int capacity) {
    int water = 0;
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] == 1) {
                water += grid[i][j];
            }
        }
    }

    int times = -(-water / capacity);

    return times;
}