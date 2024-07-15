bool issame(vector<vector<int>>& grid, int row, int col) {
    return grid[row][col] == grid[row][col + 1];
}

vector<int> minPath(vector<vector<int>>& grid, int k) {
    int N = grid.size();
    vector<int> result;
    for (int i = 0; i < k; ++i) {
        int row = i % N;
        int col = i / N;
        if (col % 2 == 0) {
            result.push_back(grid[row][col]);
        } else {
            if (issame(grid, N - row - 1, col)) {
                row = N - row - 1;
            }
            result.push_back(grid[row][col]);
        }
    }
    return result;
}