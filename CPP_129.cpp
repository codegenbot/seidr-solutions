vector<int> minPath(vector<vector<int>> grid, int k) {
    set<vector<int>> visited;
    queue<vector<int>> q;
    q.push({0, 0, 0}); // {x, y, cost}
    
    vector<int> dx = {0, 0, 1, -1};
    vector<int> dy = {1, -1, 0, 0};
    
    while (!q.empty()) {
        auto curr = q.front();
        q.pop();
        
        int x = curr[0];
        int y = curr[1];
        int cost = curr[2];
        
        if (x == grid.size() - 1 && y == grid[0].size() - 1) {
            if (cost <= k) {
                return {x, y, cost};
            }
        }
        
        for (int i = 0; i < 4; ++i) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if (nx >= 0 && nx < grid.size() && ny >= 0 && ny < grid[0].size()) {
                int new_cost = cost + grid[nx][ny];
                vector<int> next = {nx, ny, new_cost};
                
                if (visited.find(next) == visited.end() && new_cost <= k) {
                    q.push(next);
                    visited.insert(next);
                }
            }
        }
    }
    
    return {};
}