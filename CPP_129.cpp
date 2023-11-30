vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    vector<int> path;
    
    // Find the minimum value in the grid
    int minVal = INT_MAX;
    int minRow, minCol;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(grid[i][j] < minVal){
                minVal = grid[i][j];
                minRow = i;
                minCol = j;
            }
        }
    }
    
    // Add the minimum value to the path
    path.push_back(minVal);
    
    // Perform k-1 steps to find the remaining values in the path
    for(int step=1; step<k; step++){
        // Find the neighbors of the current cell
        vector<pair<int, int>> neighbors;
        if(minRow > 0){
            neighbors.push_back(make_pair(minRow-1, minCol));
        }
        if(minRow < n-1){
            neighbors.push_back(make_pair(minRow+1, minCol));
        }
        if(minCol > 0){
            neighbors.push_back(make_pair(minRow, minCol-1));
        }
        if(minCol < n-1){
            neighbors.push_back(make_pair(minRow, minCol+1));
        }
        
        // Find the neighbor with the minimum value
        int minNeighborVal = INT_MAX;
        int minNeighborRow, minNeighborCol;
        for(auto neighbor : neighbors){
            int neighborVal = grid[neighbor.first][neighbor.second];
            if(neighborVal < minNeighborVal){
                minNeighborVal = neighborVal;
                minNeighborRow = neighbor.first;
                minNeighborCol = neighbor.second;
            }
        }
        
        // Add the minimum neighbor value to the path
        path.push_back(minNeighborVal);
        
        // Update the current cell to the minimum neighbor
        minVal = minNeighborVal;
        minRow = minNeighborRow;
        minCol = minNeighborCol;
    }
    
    return path;
}