vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    vector<int> path;
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    
    // Helper function to check if a cell is valid
    auto isValid = [&](int x, int y){
        return (x >= 0 && x < n && y >= 0 && y < n && !visited[x][y]);
    };
    
    // Helper function to get neighbors of a cell
    auto getNeighbors = [&](int x, int y){
        vector<pair<int, int>> neighbors;
        neighbors.push_back({x-1, y});
        neighbors.push_back({x+1, y});
        neighbors.push_back({x, y-1});
        neighbors.push_back({x, y+1});
        return neighbors;
    };
    
    // Helper function to compare two paths
    auto comparePaths = [&](const vector<int>& pathA, const vector<int>& pathB){
        for(int i = 0; i < k; i++){
            if(pathA[i] < pathB[i]){
                return true;
            }
            else if(pathA[i] > pathB[i]){
                return false;
            }
        }
        return false;
    };
    
    // Helper function to backtrack and find the minimum path
    function<void(int, int, vector<int>&)> backtrack = [&](int x, int y, vector<int>& currPath){
        // Mark current cell as visited
        visited[x][y] = true;
        
        // Add current cell value to current path
        currPath.push_back(grid[x][y]);
        
        // If current path length is k, check if it is the minimum path
        if(currPath.size() == k){
            if(path.empty() || comparePaths(currPath, path)){
                path = currPath;
            }
        }
        else{
            // Get neighbors of current cell
            vector<pair<int, int>> neighbors = getNeighbors(x, y);
            
            // Explore each neighbor
            for(auto neighbor : neighbors){
                int nx = neighbor.first;
                int ny = neighbor.second;
                
                // If neighbor is valid, backtrack from there
                if(isValid(nx, ny)){
                    backtrack(nx, ny, currPath);
                }
            }
        }
        
        // Remove current cell value from current path and mark it as unvisited
        currPath.pop_back();
        visited[x][y] = false;
    };
    
    // Start from each cell and find the minimum path
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            vector<int> currPath;
            backtrack(i, j, currPath);
        }
    }
    
    return path;
}