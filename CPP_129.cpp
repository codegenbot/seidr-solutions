vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<int> path;
    vector<int> visited(n * n + 1, 0);
    int row = 0;
    int col = 0;
    
    while (k > 0) {
        path.push_back(grid[row][col]);
        visited[grid[row][col]] = 1;
        k--;
        
        if (col + 1 < n && !visited[grid[row][col + 1]]) {
            col++;
        } else if (row + 1 < n && !visited[grid[row + 1][col]]) {
            row++;
        } else if (col - 1 >= 0 && !visited[grid[row][col - 1]]) {
            col--;
        } else if (row - 1 >= 0 && !visited[grid[row - 1][col]]) {
            row--;
        }
    }
    
    return path;
}