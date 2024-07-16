int max_fill(vector<vector<int>> grid, int capacity) {
    int count = 0;
    for (int j = 0; j < grid[0].size(); ++j) {
        int sum = 0;
        for (int i = 0; i < grid.size(); ++i) {
            sum += grid[i][j];
        }
        count += (sum + capacity - 1) / capacity;
    }
    return count;
}