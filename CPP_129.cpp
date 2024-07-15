vector<int> minPath(vector<vector<int>>& grid, int k) {
    bool issame(int x, int y) {
        return x == y;
    }
    
    int N = grid.size();
    vector<int> result;
    for (int i = 0; i < k; ++i) {
        int row = i % N;
        int col = i / N;
        if (col % 2 == 0) {
            result.push_back(grid[row][col]);
        } else {
            result.push_back(grid[N - row - 1][col]);
        }
    }
    return result;
}