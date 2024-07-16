int max_fill(vector<vector<int>> grid, int capacity) {
    int total = 0;
    for (int i = 0; i < grid.size(); ++i) {
        int sum = 0;
        for (int j = 0; j < grid[i].size(); ++j) {
            sum += grid[i][j];
        }
        total += sum / capacity + (sum % capacity != 0);
    }
    return total;
}