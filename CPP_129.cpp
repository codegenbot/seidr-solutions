vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    vector<int> path;
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    
    int row = 0, col = 0;
    int dirRow[] = {-1, 0, 1, 0};  // Up, Right, Down, Left
    int dirCol[] = {0, 1, 0, -1};
    
    while (k > 0){
        path.push_back(grid[row][col]);
        visited[row][col] = true;
        
        int nextRow = 0, nextCol = 0;
        for (int i = 0; i < 4; i++){
            int newRow = row + dirRow[i];
            int newCol = col + dirCol[i];
            
            if (newRow >= 0 && newRow < n && newCol >= 0 && newCol < n && !visited[newRow][newCol]){
                nextRow = newRow;
                nextCol = newCol;
                break;
            }
        }
        
        row = nextRow;
        col = nextCol;
        k--;
    }
    
    return path;
}