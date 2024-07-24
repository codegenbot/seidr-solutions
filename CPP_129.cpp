vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<int>> visited(n, vector<int>(n));
    queue<pair<pair<int, int>, vector<int>>> q;
    vector<int> res;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!visited[i][j]) {
                visited[i][j] = true;
                res.push_back(grid[i][j]);
                q.push({{i, j}, res});
                
                while (!q.empty()) {
                    auto [pos, path] = q.front();
                    q.pop();
                    
                    for (int dir = 0; dir < 4; dir++) {
                        int x = pos.first + (dir % 2 ? -1 : 1);
                        int y = pos.second + (dir == 0 ? -1 : 1);
                        
                        if (x >= 0 && x < n && y >= 0 && y < n && !visited[x][y]) {
                            visited[x][y] = true;
                            res.push_back(grid[x][y]);
                            q.push({{-path.size(), {x, y}, path}});
                            
                            if ((int)res.size() == k) {
                                return res;
                            }
                        }
                    }
                }
            }
        }
    }
    
    return {};
}