vector<int> minPath(vector<vector<int>>& grid, int k) {
    int n = grid.size();
    vector<vector<bool>> visited(n, vector<bool>(n));
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (visited[i][j]) continue;
            visited[i][j] = true;
            
            pq.push({grid[i][j], {i, j}});
        }
    }
    
    vector<int> path;
    while (!pq.empty()) {
        int val = pq.top().first;
        int x = pq.top().second.first;
        int y = pq.top().second.second;
        pq.pop();
        
        for (int i = -1; i <= 1; ++i) {
            for (int j = -1; j <= 1; ++j) {
                if (abs(i) + abs(j) > 1) continue;
                
                int newX = x + i;
                int newY = y + j;
                if (newX < 0 || newX >= n || newY < 0 || newY >= n || visited[newX][newY]) continue;
                
                path.push_back(val);
                for (int l = k - 1; ; --l) {
                    if (l == 0) break;
                    pq.push({grid[newX][newY], {newX, newY}});
                    visited[newX][newY] = true;
                    newX += i;
                    newY += j;
                }
            }
        }
    }
    
    return path;
}