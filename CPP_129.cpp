vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    int m = grid[0].size();
    int x = 0, y = 0;
    vector<int> path;
    
    for(int i = 0; i < k; i++){
        path.push_back(grid[x][y]);
        if((x + y) % 2 == 0){
            if(y + 1 < m){
                y++;
            }else{
                x++;
            }
        }else{
            if(x + 1 < n){
                x++;
            }else{
                y++;
            }
        }
    }
    
    return path;
}