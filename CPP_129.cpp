vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    vector<vector<bool>> visited(n, vector<bool>(n));
    vector<int> path;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(visited[i][j]) continue;
            vector<int> lst;
            dfs(grid, i, j, k, visited, lst);
            if(lst.size() == k){
                path = lst;
                break;
            }
        }
        if(path.size() == k) break;
    }
    return path;
}

void dfs(vector<vector<int>>& grid, int i, int j, int k, vector<vector<bool>>& visited, vector<int>& lst){
    int n = grid.size();
    if(k == 0) return;
    visited[i][j] = true;
    lst.push_back(grid[i][j]);
    for(int x = max(0, i-1); x <= min(n-1, i+1); x++){
        for(int y = max(0, j-1); y <= min(n-1, j+1); y++){
            if(x == i && y == j) continue;
            if(!visited[x][y]){
                dfs(grid, x, y, k-1, visited, lst);
                if(lst.size() == k) return;
            }
        }
    }
    visited[i][j] = false;
}