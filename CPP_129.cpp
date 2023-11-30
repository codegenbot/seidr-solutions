vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    int m = grid[0].size();
    vector<int> path;
    vector<vector<int>> visited(n, vector<int>(m, 0));
    int curRow = 0;
    int curCol = 0;
    
    while (k > 0) {
        path.push_back(grid[curRow][curCol]);
        visited[curRow][curCol] = 1;
        k--;
        
        if (curCol+1 < m && !visited[curRow][curCol+1]) {
            curCol++;
        } else if (curRow+1 < n && !visited[curRow+1][curCol]) {
            curRow++;
        } else if (curCol-1 >= 0 && !visited[curRow][curCol-1]) {
            curCol--;
        } else if (curRow-1 >= 0 && !visited[curRow-1][curCol]) {
            curRow--;
        }
    }
    
    return path;
}