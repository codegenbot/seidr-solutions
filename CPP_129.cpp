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
        int len = min(pathA.size(), pathB.size());
        for(int i = 0; i < len; i++){
            if(pathA[i] < pathB[i]){
                return true;
            }
            else if(pathA[i] > pathB[i]){
                return false;
            }
        }
        return pathA.size() < pathB.size();
    };
    
    // DFS function to find minimum path
    function<void(int, int, int, vector<int>)> dfs = [&](int x, int y, int steps, vector<int> currPath){
        visited[x][y] = true;
        currPath.push_back(grid[x][y]);
        
        if(steps == k){
            if(path.empty() || comparePaths(currPath, path)){
                path = currPath;
            }
            visited[x][y] = false;
            return;
        }
        
        vector<pair<int, int>> neighbors = getNeighbors(x, y);
        for(auto neighbor : neighbors){
            int nx = neighbor.first;
            int ny = neighbor.second;
            if(isValid(nx, ny)){
                dfs(nx, ny, steps+1, currPath);
            }
        }
        
        visited[x][y] = false;
    };
    
    // Start DFS from each cell
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            dfs(i, j, 1, {});
        }
    }
    
    return path;
}