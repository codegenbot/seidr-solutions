vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    int m = grid[0].size();
    vector<int> path;
    int x = 0, y = 0;
    while(k > 0){
        path.push_back(grid[x][y]);
        if(x % 2 == 0){
            if(y < m - 1) y++;
            else x++;
        }
        else{
            if(y > 0) y--;
            else x++;
        }
        k--;
    }
    return path;
}