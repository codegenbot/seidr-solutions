vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<bool>> visited(n, vector<bool>(n));
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>> > pq;
    pq.push({1, {0, 0}});
    visited[0][0] = true;
    vector<int> path;
    
    while (!pq.empty() && (int)path.size() < k) {
        int val = pq.top().first;
        int x = pq.top().second.first;
        int y = pq.top().second.second;
        pq.pop();
        
        if ((int)path.size() + 1 < k) {
            for (int dx : {-1, 0, 1}) {
                for (int dy : {-1, 0, 1}) {
                    int nx = x + dx;
                    int ny = y + dy;
                    
                    if (nx >= 0 && ny >= 0 && nx < n && ny < n && !visited[nx][ny]) {
                        pq.push({grid[nx][ny], {nx, ny}});
                        visited[nx][ny] = true;
                    }
                }
            }
        } else {
            path.push_back(val);
        }
    }
    
    return path;
}