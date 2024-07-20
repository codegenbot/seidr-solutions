int max_fill(vector<vector<int>> grid, int capacity) {
    int total_water = 0;
    int moves = 0;

    for (int i = 0; i < grid.size(); ++i) {
        for (int j = 0; j < grid[0].size(); ++j) {
            total_water += grid[i][j];
            if (total_water >= capacity) {
                moves += total_water / capacity;
                total_water %= capacity;
            }
        }
    }

    if (total_water > 0) {
        moves++;
    }

    return moves;
}