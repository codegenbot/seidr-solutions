int max_fill(vector<vector<int>> grid, int capacity) {
    int moves = 0;
    for (int i = 0; i < grid.size(); ++i) {
        int water_needed = 0;
        for (int j = 0; j < grid[i].size(); ++j) {
            water_needed += grid[i][j];
        }
        moves += (water_needed + capacity - 1) / capacity;
    }
    return moves;
}