vector<int> minPath(vector<vector<int>>& grid, int k) {
    bool issame(int a, int b);
    
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

bool issame(int a, int b) {
    return a == b;
}