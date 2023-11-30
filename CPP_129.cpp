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
        vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        for(auto dir : directions){
            int newX = x + dir.first;
            int newY = y + dir.second;
            if(isValid(newX, newY)){
                neighbors.push_back({newX, newY});
            }
        }
        return neighbors;
    };

    // DFS function to find the minimum path
    function<bool(int, int, int)> dfs = [&](int x, int y, int steps){
        path.push_back(grid[x][y]);
        visited[x][y] = true;

        if(steps == k){
            return true;
        }

        vector<pair<int, int>> neighbors = getNeighbors(x, y);
        sort(neighbors.begin(), neighbors.end(), [&](pair<int, int> a, pair<int, int> b){
            return grid[a.first][a.second] < grid[b.first][b.second];
        });

        for(auto neighbor : neighbors){
            int newX = neighbor.first;
            int newY = neighbor.second;
            if(dfs(newX, newY, steps + 1)){
                return true;
            }
        }

        visited[x][y] = false;
        path.pop_back();
        return false;
    };

    // Start DFS from each cell
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(dfs(i, j, 1)){
                return path;
            }
        }
    }

    return path;
}