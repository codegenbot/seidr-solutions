vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    int m = grid[0].size();
    vector<int> path;
    int x = 0, y = 0;
    int dx = 1, dy = 0;
    
    for(int i = 0; i < k; i++){
        path.push_back(grid[x][y]);
        
        if(x + dx < 0 || x + dx >= n || y + dy < 0 || y + dy >= m || grid[x + dx][y + dy] == -1){
            if(dx == 1 && dy == 0){
                dx = 0;
                dy = 1;
            }
            else if(dx == 0 && dy == 1){
                dx = -1;
                dy = 0;
            }
            else if(dx == -1 && dy == 0){
                dx = 0;
                dy = -1;
            }
            else if(dx == 0 && dy == -1){
                dx = 1;
                dy = 0;
            }
        }
        
        x += dx;
        y += dy;
    }
    
    return path;
}