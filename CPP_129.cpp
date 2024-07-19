bool issame(vector<int> a, vector<int> b) {
    return a == b;
}
vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    int m = grid[0].size();
    
    vector<int> path;
    if (n == 0 || m == 0) {
        return path;
    }

    int row = 0, col = 0;

    while (row < n-1 || col < m-1) {
        if (col == m-1 || (row < n-1 && grid[row+1][col] < grid[row][col])) {
            path.push_back(1);
            row++;
        } else {
            path.push_back(0);
            col++;
        }
    }

    return path;
}