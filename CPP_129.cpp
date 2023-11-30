vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    int m = grid[0].size();
    vector<int> path;
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    int curRow = 0, curCol = 0;
    while(k > 0){
        path.push_back(grid[curRow][curCol]);
        visited[curRow][curCol] = true;
        if(curCol + 1 < m && !visited[curRow][curCol + 1]){
            curCol++;
        }
        else if(curRow + 1 < n && !visited[curRow + 1][curCol]){
            curRow++;
        }
        else if(curCol - 1 >= 0 && !visited[curRow][curCol - 1]){
            curCol--;
        }
        else if(curRow - 1 >= 0 && !visited[curRow - 1][curCol]){
            curRow--;
        }
        k--;
    }
    return path;
}