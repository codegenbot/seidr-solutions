vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    vector<int> path;
    int row = 0, col = 0;
    path.push_back(grid[row][col]);

    while (path.size() < k) {
        if (row < n - 1 && (col == n - 1 || grid[row + 1][col] < grid[row][col + 1])) {
            row++;
        } else {
            col++;
        }
        path.push_back(grid[row][col]);
    }

    return path;
}