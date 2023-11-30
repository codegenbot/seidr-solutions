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
        int dx[] = {-1, 1, 0, 0};
        int dy[] = {0, 0, -1, 1};
        
        for(int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if(isValid(nx, ny)){
                neighbors.push_back({nx, ny});
            }
        }
        
        return neighbors;
    };
    
    // Helper function to perform DFS to find minimum path
    function<bool(int, int, int)> dfs = [&](int x, int y, int len){
        visited[x][y] = true;
        path.push_back(grid[x][y]);
        
        if(len == k){
            return true;
        }
        
        vector<pair<int, int>> neighbors = getNeighbors(x, y);
        sort(neighbors.begin(), neighbors.end(), [&](pair<int, int> a, pair<int, int> b){
            return grid[a.first][a.second] < grid[b.first][b.second];
        });
        
        for(auto neighbor : neighbors){
            int nx = neighbor.first;
            int ny = neighbor.second;
            
            if(dfs(nx, ny, len + 1)){
                return true;
            }
        }
        
        path.pop_back();
        visited[x][y] = false;
        return false;
    };
    
    // Find the minimum path starting from each cell
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(dfs(i, j, 1)){
                return path;
            }
        }
    }
    
    return path;
}