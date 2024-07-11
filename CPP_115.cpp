int max_fill(vector<vector<int>> grid, int capacity) {
    int maxWater = 0;
    for (int i = 0; i < grid.size(); i++) {
        int totalWater = 0;
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] == 1) {
                totalWater += 1;
            }
        }
        maxWater += totalWater / capacity + (totalWater % capacity > 0);
    }
    return maxWater;
}