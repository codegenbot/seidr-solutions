vector<int> minPath(vector<vector<int>> grid, int k){
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>> > pq;
    int rows = grid.size();
    int cols = grid[0].size();
    vector<vector<int>> dist(rows, vector<int>(cols, INT_MAX));
    
    pq.push({grid[0][0], {0, 0}});
    dist[0][0] = grid[0][0];
    
    int dx[] = {1, -1, 0, 0};
    int dy[] = {0, 0, 1, -1};
    
    while (!pq.empty()){
        auto curr = pq.top();
        pq.pop();
        
        int x = curr.second.first;
        int y = curr.second.second;
        int cost = curr.first;
        
        for (int i = 0; i < 4; i++){
            int new_x = x + dx[i];
            int new_y = y + dy[i];
            
            if (new_x >= 0 && new_x < rows && new_y >= 0 && new_y < cols){
                int new_cost = cost + grid[new_x][new_y];
                if (new_cost < dist[new_x][new_y]){
                    dist[new_x][new_y] = new_cost;
                    pq.push({new_cost, {new_x, new_y}});
                }
            }
        }
    }
    
    vector<int> result;
    result.push_back(dist[rows-1][cols-1]);
    
    return result;
}