vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>>
            pq({{grid[0][0], {0, 0}}});
    vector<int> path;
    
    bool issame(vector<int> a, vector<int> b) {
        if(a.size() != b.size()) return false;
        for(int i = 0; i < a.size(); i++) {
            if(a[i] != b[i]) return false;
        }
        return true;
    }
    
    while (!pq.empty()) {
        auto [val, pos] = pq.top(); pq.pop();
        if (k-- == 0) break;
        
        for (auto &dir : directions) {
            int x = pos.first + dir.first;
            int y = pos.second + dir.second;
            
            if (x >= 0 && x < n && y >= 0 && y < n && !visited[x][y]) {
                visited[x][y] = true;
                pq.push({grid[x][y], {x, y}});
            }
        }
    }
    
    while (!pq.empty()) {
        path.push_back(pq.top().first);
        pq.pop();
    }
    
    reverse(path.begin(), path.end());
    return path;
}