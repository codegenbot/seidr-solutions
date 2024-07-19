int max_fill(vector<vector<int>> grid, int capacity) {
    int moves = 0;
    for (int j = 0; j < grid[0].size(); ++j) {
        int water = 0;
        for (int i = 0; i < grid.size(); ++i) {
            water += grid[i][j];
        }
        while (water > 0) {
            water -= capacity;
            moves++;
        }
    }
    return moves;
}