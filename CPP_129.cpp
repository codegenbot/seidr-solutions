vector<int> minPath(vector<vector<int>> grid, int k){
    vector<int> result;
    int n = grid.size();
    int m = grid[0].size();
    
    vector<vector<int>> dp(n, vector<int>(m, INT_MAX));
    dp[0][0] = grid[0][0];
    
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
    pq.push({grid[0][0], {0, 0}});
    
    vector<pair<int, int>> dirs = {{0, 1}, {1, 0}};
    
    while(!pq.empty()){
        auto curr = pq.top();
        pq.pop();
        
        int x = curr.second.first;
        int y = curr.second.second;
        
        for(auto dir : dirs){
            int nx = x + dir.first;
            int ny = y + dir.second;
            
            if(nx >= 0 && nx < n && ny >= 0 && ny < m){
                int new_dist = dp[x][y] + grid[nx][ny];
                
                if(new_dist < dp[nx][ny]){
                    dp[nx][ny] = new_dist;
                    pq.push({new_dist, {nx, ny}});
                }
            }
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(dp[i][j] <= k){
                result.push_back(dp[i][j]);
            }
        }
    }
    
    return result;
}