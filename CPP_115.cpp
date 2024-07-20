int max_fill(vector<vector<int>> grid, int capacity) {
    int total = 0;
    for (int i = 0; i < grid.size(); i++) {
        int current = 0;
        for (int j = 0; j < grid[i].size(); j++) {
            current += grid[i][j];
        }
        total += current / capacity + (current % capacity != 0);
    }
    return total;
}