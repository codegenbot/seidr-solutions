vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    int m = grid[0].size();
    vector<int> path;
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    
    int row = 0;
    int col = 0;
    int count = 0;
    
    while (count < k) {
        path.push_back(grid[row][col]);
        visited[row][col] = true;
        count++;
        
        if (count == k) {
            break;
        }
        
        if (row > 0 && !visited[row-1][col]) {
            row--;
        } else if (col < m-1 && !visited[row][col+1]) {
            col++;
        } else if (row < n-1 && !visited[row+1][col]) {
            row++;
        } else if (col > 0 && !visited[row][col-1]) {
            col--;
        }
    }
    
    return path;
}