vector<int> minPath(vector<vector<int>> grid, int k){
    // Find the starting cell with the minimum value
    int minVal = grid[0][0];
    int startRow = 0, startCol = 0;
    for(int i=0; i<grid.size(); i++){
        for(int j=0; j<grid[i].size(); j++){
            if(grid[i][j] < minVal){
                minVal = grid[i][j];
                startRow = i;
                startCol = j;
            }
        }
    }
    
    // Initialize the result vector with the minimum value
    vector<int> result;
    result.push_back(minVal);
    
    // Perform k steps to find the minimum path
    int currRow = startRow, currCol = startCol;
    while(result.size() < k){
        // Find the neighbors of the current cell
        vector<pair<int, int>> neighbors;
        if(currRow > 0) neighbors.push_back(make_pair(currRow-1, currCol));
        if(currRow < grid.size()-1) neighbors.push_back(make_pair(currRow+1, currCol));
        if(currCol > 0) neighbors.push_back(make_pair(currRow, currCol-1));
        if(currCol < grid[currRow].size()-1) neighbors.push_back(make_pair(currRow, currCol+1));
        
        // Find the neighbor with the minimum value
        int minNeighborVal = grid[neighbors[0].first][neighbors[0].second];
        int minNeighborRow = neighbors[0].first;
        int minNeighborCol = neighbors[0].second;
        for(int i=1; i<neighbors.size(); i++){
            int neighborVal = grid[neighbors[i].first][neighbors[i].second];
            if(neighborVal < minNeighborVal){
                minNeighborVal = neighborVal;
                minNeighborRow = neighbors[i].first;
                minNeighborCol = neighbors[i].second;
            }
        }
        
        // Move to the neighbor with the minimum value
        currRow = minNeighborRow;
        currCol = minNeighborCol;
        
        // Add the neighbor value to the result vector
        result.push_back(minNeighborVal);
    }
    
    return result;
}