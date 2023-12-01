vector<int> minPath(vector<vector<int>> grid, int k){
    vector<int> path;
    int n = grid.size();
    int m = grid[0].size();
    
    int startRow = 0;
    int startCol = 0;
    
    // Find the starting cell with the minimum value
    int minValue = grid[0][0];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(grid[i][j] < minValue){
                minValue = grid[i][j];
                startRow = i;
                startCol = j;
            }
        }
    }
    
    // Add the starting cell value to the path
    path.push_back(minValue);
    
    // Initialize the current cell to the starting cell
    int currRow = startRow;
    int currCol = startCol;
    
    // Loop until the path length is equal to k
    while(path.size() < k){
        // Find the neighbor cells
        vector<pair<int, int>> neighbors;
        if(currRow > 0){
            neighbors.push_back(make_pair(currRow-1, currCol));
        }
        if(currRow < n-1){
            neighbors.push_back(make_pair(currRow+1, currCol));
        }
        if(currCol > 0){
            neighbors.push_back(make_pair(currRow, currCol-1));
        }
        if(currCol < m-1){
            neighbors.push_back(make_pair(currRow, currCol+1));
        }
        
        // Find the neighbor cell with the minimum value
        int minNeighborValue = grid[neighbors[0].first][neighbors[0].second];
        int minNeighborRow = neighbors[0].first;
        int minNeighborCol = neighbors[0].second;
        for(int i=1; i<neighbors.size(); i++){
            int neighborValue = grid[neighbors[i].first][neighbors[i].second];
            if(neighborValue < minNeighborValue){
                minNeighborValue = neighborValue;
                minNeighborRow = neighbors[i].first;
                minNeighborCol = neighbors[i].second;
            }
        }
        
        // Add the minimum neighbor cell value to the path
        path.push_back(minNeighborValue);
        
        // Update the current cell to the minimum neighbor cell
        currRow = minNeighborRow;
        currCol = minNeighborCol;
    }
    
    return path;
}