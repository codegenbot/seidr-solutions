bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size())
        return false;
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}

void dfs(vector<vector<int>>& grid, int x, int y, int k, vector<int>& path){
    if(x < 0 || y < 0 || x >= grid.size() || y >= grid.size() || k < 0 || grid[x][y] == -1)
        return;
    
    path.push_back(grid[x][y]);
    
    grid[x][y] = -1;
    
    dfs(grid, x, y+1, k-path.back(), path);
    
    dfs(grid, x+1, y, k-path.back(), path);
    
    grid[x][y] = path.back();
    path.pop_back();
}

vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    vector<int> path;

    int minValue = grid[0][0];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            minValue = min(minValue, grid[i][j]);
        }
    }

    int startX, startY;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(grid[i][j] == minValue){
                startX = i;
                startY = j;
                break;
            }
        }
    }

    dfs(grid, startX, startY, k, path);

    return path;
}