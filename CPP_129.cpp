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
        if(isValid(x-1, y)) neighbors.push_back({x-1, y});
        if(isValid(x+1, y)) neighbors.push_back({x+1, y});
        if(isValid(x, y-1)) neighbors.push_back({x, y-1});
        if(isValid(x, y+1)) neighbors.push_back({x, y+1});
        return neighbors;
    };
    
    // Helper function to perform DFS to find minimum path
    function<bool(int, int, int)> dfs = [&](int x, int y, int steps){
        visited[x][y] = true;
        path.push_back(grid[x][y]);
        
        if(steps == k){
            return true;
        }
        
        vector<pair<int, int>> neighbors = getNeighbors(x, y);
        sort(neighbors.begin(), neighbors.end(), [&](const pair<int, int>& a, const pair<int, int>& b){
            return grid[a.first][a.second] < grid[b.first][b.second];
        });
        
        for(auto neighbor : neighbors){
            if(dfs(neighbor.first, neighbor.second, steps+1)){
                return true;
            }
        }
        
        visited[x][y] = false;
        path.pop_back();
        return false;
    };
    
    // Start DFS from each cell to find minimum path
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(dfs(i, j, 1)){
                return path;
            }
        }
    }
    
    return path;
}