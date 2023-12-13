vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    vector<int> path;
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    
    // Function to check if cell is valid and not visited
    auto isValid = [&](int x, int y){
        return (x >= 0 && x < n && y >= 0 && y < n && !visited[x][y]);
    };
    
    // Function to get neighbors of a cell
    auto getNeighbors = [&](int x, int y){
        vector<pair<int, int>> neighbors;
        if(isValid(x-1, y)) neighbors.push_back({x-1, y});
        if(isValid(x+1, y)) neighbors.push_back({x+1, y});
        if(isValid(x, y-1)) neighbors.push_back({x, y-1});
        if(isValid(x, y+1)) neighbors.push_back({x, y+1});
        return neighbors;
    };
    
    // Function to DFS search for minimum path
    function<bool(int, int, int)> dfs = [&](int x, int y, int steps){
        path.push_back(grid[x][y]);
        visited[x][y] = true;
        
        // Base case: path of length k is found
        if(steps == k) return true;
        
        // Get neighbors of current cell
        vector<pair<int, int>> neighbors = getNeighbors(x, y);
        
        // Sort neighbors based on their values
        sort(neighbors.begin(), neighbors.end(), [&](const pair<int, int>& a, const pair<int, int>& b){
            return grid[a.first][a.second] < grid[b.first][b.second];
        });
        
        // Recursive DFS for each neighbor
        for(auto neighbor : neighbors){
            if(dfs(neighbor.first, neighbor.second, steps+1)){
                return true;
            }
        }
        
        // Backtrack
        path.pop_back();
        visited[x][y] = false;
        return false;
    };
    
    // Start DFS from each cell and return the minimum path
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(dfs(i, j, 1)){
                return path;
            }
        }
    }
    
    return path;
}