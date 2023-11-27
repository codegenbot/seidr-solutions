vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    int m = grid[0].size();
    vector<int> path;
    
    // Function to check if the given cell is valid or not
    bool isValid(int x, int y){
        return (x >= 0 && x < n && y >= 0 && y < m);
    }
    
    // Function to get neighbors of a cell
    vector<pair<int, int>> getNeighbors(int x, int y){
        vector<pair<int, int>> neighbors;
        neighbors.push_back({x+1, y});
        neighbors.push_back({x-1, y});
        neighbors.push_back({x, y+1});
        neighbors.push_back({x, y-1});
        return neighbors;
    }
    
    // Function to find the minimum path starting from the given cell
    void findMinPath(int x, int y, int len){
        // Add the value of the current cell to the path
        path.push_back(grid[x][y]);
        
        // Base case: We have reached the desired length
        if(len == k){
            return;
        }
        
        // Get the neighbors of the current cell
        vector<pair<int, int>> neighbors = getNeighbors(x, y);
        
        // Sort the neighbors based on their values
        sort(neighbors.begin(), neighbors.end(), [&grid](pair<int, int>& a, pair<int, int>& b){
            return grid[a.first][a.second] < grid[b.first][b.second];
        });
        
        // Visit the neighbors in order
        for(auto neighbor : neighbors){
            int nextX = neighbor.first;
            int nextY = neighbor.second;
            
            // Check if the neighbor is valid and not visited already
            if(isValid(nextX, nextY)){
                // Recursively find the minimum path starting from the neighbor
                findMinPath(nextX, nextY, len+1);
                
                // Break the loop if the desired length is reached
                if(len == k){
                    break;
                }
            }
        }
    }
    
    // Iterate through each cell in the grid and find the minimum path
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            findMinPath(i, j, 1);
            
            // Return the path if the desired length is reached
            if(path.size() == k){
                return path;
            }
            
            // Clear the path vector for the next iteration
            path.clear();
        }
    }
    
    // Return an empty vector if the desired length cannot be reached
    return {};
}