int max_fill(vector<vector<int>> grid, int capacity) {
    int count = 0;
    for (int j = 0; j < grid[0].size(); j++) {
        int total = 0;
        for (int i = 0; i < grid.size(); i++) {
            total += grid[i][j];
        }
        while (total > 0) {
            total -= capacity;
            count++;
        }
    }
    return count;
}