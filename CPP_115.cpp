int max_fill(vector<vector<int>> grid, int capacity) {
    int moves = 0;
    for (int j = 0; j < grid[0].size(); ++j) {
        int curr = 0;
        for (int i = 0; i < grid.size(); ++i) {
            if (grid[i][j] == 1) {
                curr++;
                if (curr == capacity) {
                    moves++;
                    curr = 0;
                }
            }
        }
        moves += curr;
    }
    return moves;
}