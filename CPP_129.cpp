vector<int> minPath(vector<vector<int>> grid, int k){
    vector<int> path;
    int n = grid.size();
    int m = grid[0].size();
    
    int row = 0;
    int col = 0;
    
    // find the cell with the minimum value
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(grid[i][j] == 1){
                row = i;
                col = j;
                break;
            }
        }
    }
    
    // add the minimum value to the path
    path.push_back(grid[row][col]);
    
    // calculate the next cell in the path based on the current cell
    for(int step = 1; step < k; step++){
        // check the neighbor cells
        vector<pair<int, int>> neighbors;
        if(row > 0) neighbors.push_back(make_pair(row - 1, col)); // up
        if(row < n - 1) neighbors.push_back(make_pair(row + 1, col)); // down
        if(col > 0) neighbors.push_back(make_pair(row, col - 1)); // left
        if(col < m - 1) neighbors.push_back(make_pair(row, col + 1)); // right
        
        // find the neighbor cell with the minimum value
        int minVal = INT_MAX;
        pair<int, int> nextCell;
        for(auto neighbor : neighbors){
            int neighborVal = grid[neighbor.first][neighbor.second];
            if(neighborVal < minVal){
                minVal = neighborVal;
                nextCell = neighbor;
            }
        }
        
        // update the current cell and add the minimum value to the path
        row = nextCell.first;
        col = nextCell.second;
        path.push_back(grid[row][col]);
    }
    
    return path;
}