bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> minPath(vector<vector<int>> grid, int k){
    vector<int> result;
    if(k < 0){
        return result;
    }
    
    int n = grid.size();
    int m = grid[0].size();
    
    queue<pair<int, vector<int>>> q;
    set<pair<int, vector<int>>> visited;
    vector<int> dx = {0, 0, 1, -1};
    vector<int> dy = {1, -1, 0, 0};
    
    q.push({0, {0, 0}});
    visited.insert({0, {0, 0}});
    
    while(!q.empty()){
        int steps = q.front().first;
        vector<int> coordinates = q.front().second;
        q.pop();
        
        int x = coordinates[0];
        int y = coordinates[1];
        
        if(x == n-1 && y == m-1){
            result = coordinates;
            break;
        }
        
        for(int i=0; i<4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx >= 0 && nx < n && ny >= 0 && ny < m){
                vector<int> newCoordinates = {nx, ny};
                int newCost = steps + grid[nx][ny];
                if(newCost <= k && visited.find({newCost, newCoordinates}) == visited.end()){
                    q.push({newCost, newCoordinates});
                    visited.insert({newCost, newCoordinates});
                }
            }
        }
    }
    
    return result;
}