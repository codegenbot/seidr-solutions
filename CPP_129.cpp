vector<bool> minPath(vector<vector<int>> grid, int k){
    vector<bool> res;
    for(int i = 0; i < (int)grid.size(); i++){
        for(int j = 0; j < (int)grid[0].size(); j++){
            if(grid[i][j] <= k){
                res.push_back(true);
                k--;
                if(k == 0) return res;
            } else {
                res.push_back(false);
            }
        }
    }
    return res;
}