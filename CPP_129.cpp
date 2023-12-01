vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    vector<int> path;
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    int curRow = 0, curCol = 0;
    
    while(k > 0){
        path.push_back(grid[curRow][curCol]);
        visited[curRow][curCol] = true;
        k--;
        
        // Check if there is a neighbor cell that is not visited yet
        if(curRow + 1 < n && !visited[curRow + 1][curCol]){
            curRow++;
        }
        else if(curCol + 1 < n && !visited[curRow][curCol + 1]){
            curCol++;
        }
        else{
            break; // No more unvisited neighbor cells, stop the path
        }
    }
    
    return path;
}