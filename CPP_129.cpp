int n = grid.size();
    vector<int> path;
    vector<vector<int>> visited(n, vector<int>(n, 0));
    pair<int, int> start;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(grid[i][j] == 1){
                start = {i, j};
                break;
            }
        }
    }
    
    path.push_back(1);
    visited[start.first][start.second] = 1;
    
    while(path.size() < k){
        int curRow = start.first;
        int curCol = start.second;
        pair<int, int> nextPos;
        int minVal = n * n + 1;

        for(int dr = -1; dr <= 1; dr++){
            for(int dc = -1; dc <= 1; dc++){
                int newRow = curRow + dr;
                int newCol = curCol + dc;
                if(newRow >= 0 && newRow < n && newCol >= 0 && newCol < n && !visited[newRow][newCol]){
                    if(grid[newRow][newCol] < minVal){
                        minVal = grid[newRow][newCol];
                        nextPos = {newRow, newCol};
                    }
                }
            }
        }
        
        path.push_back(minVal);
        visited[nextPos.first][nextPos.second] = 1;
        start = nextPos;
    }
    
    return path;
}