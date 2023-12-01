vector<int> minPath(vector<vector<int>> grid, int k){
        int N = grid.size();
        int row = -1, col = -1;
        
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if(grid[i][j]==1){
                    row = i;
                    col = j;
                    break;
                }
            }
            if(row!=-1) break;
        }
        
        vector<int> path;
        path.push_back(grid[row][col]);
        k--;
        
        while(k>0){
            // Calculate the neighbors
            vector<pair<int,int>> neighbors;
            if(row>0) neighbors.push_back(make_pair(row-1, col));          // Top neighbor
            if(row<N-1) neighbors.push_back(make_pair(row+1, col));       // Bottom neighbor
            if(col>0) neighbors.push_back(make_pair(row, col-1));          // Left neighbor
            if(col<N-1) neighbors.push_back(make_pair(row, col+1));       // Right neighbor
            
            // Find the smallest neighbor
            int minVal = 1e9;
            int minRow = -1, minCol = -1;
            
            for(auto n: neighbors){
                if(grid[n.first][n.second]<minVal){
                    minVal = grid[n.first][n.second];
                    minRow = n.first;
                    minCol = n.second;
                }
            }
            
            // Update row and col
            row = minRow;
            col = minCol;
            
            // Add the value to the path
            path.push_back(grid[row][col]);
            k--;
        }
        
        return path;
    }