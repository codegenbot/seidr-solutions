vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    int m = grid[0].size();
    vector<int> path;
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    int currRow = 0;
    int currCol = 0;
    
    while (k > 0) {
        path.push_back(grid[currRow][currCol]);
        visited[currRow][currCol] = true;
        k--;
        
        if (currRow < n - 1 && !visited[currRow + 1][currCol]) {
            currRow++;
        } else if (currCol < m - 1 && !visited[currRow][currCol + 1]) {
            currCol++;
        } else if (currRow > 0 && !visited[currRow - 1][currCol]) {
            currRow--;
        } else if (currCol > 0 && !visited[currRow][currCol - 1]) {
            currCol--;
        }
    }
    
    return path;
}