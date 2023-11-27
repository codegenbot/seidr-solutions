vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    vector<int> path;
    vector<vector<int>> visited(n, vector<int>(n, 0));
    int total = 0;
    
    // Helper function to check if a cell is valid
    auto isValid = [&](int x, int y){
        return (x >= 0 && x < n && y >= 0 && y < n && visited[x][y] == 0);
    };
    
    // Helper function to get the neighbors of a cell
    auto getNeighbors = [&](int x, int y){
        vector<pair<int, int>> neighbors;
        int dx[] = {0, 0, 1, -1};
        int dy[] = {1, -1, 0, 0};

        for(int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if(isValid(nx, ny)){
                neighbors.push_back({nx, ny});
            }
        }

        return neighbors;
    };
    
    // Helper function to do DFS and find the minimum path
    function<bool(int, int)> dfs = [&](int x, int y){
        path.push_back(grid[x][y]);
        visited[x][y] = 1;
        total++;
        
        if(total == k){
            return true;
        }
        
        vector<pair<int, int>> neighbors = getNeighbors(x, y);
        sort(neighbors.begin(), neighbors.end(), [&](pair<int, int>& a, pair<int, int>& b){
            return grid[a.first][a.second] < grid[b.first][b.second];
        });
        
        for(auto neighbor : neighbors){
            if(dfs(neighbor.first, neighbor.second)){
                return true;
            }
        }
        
        path.pop_back();
        visited[x][y] = 0;
        total--;
        
        return false;
    };
    
    // Iterate over all cells and start DFS from each cell
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            dfs(i, j);
            if(total == k){
                return path;
            }
        }
    }
    
    return path;
}