int max_fill(vector<vector<int>> grid, int capacity) {
    int moves = 0;
    int columns = grid[0].size();
    
    for (int j = 0; j < columns; ++j) {
        int water = 0;
        for (const auto &row : grid) {
            water += row[j];
        }
        while (water > 0) {
            water -= capacity;
            moves++;
        }
    }
    
    return moves;
}