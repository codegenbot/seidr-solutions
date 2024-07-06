vector<int> minPath(vector<vector<int>> grid, int k){
    vector<int> res;
    for(int i = 0; i < (int)grid.size(); i++){
        for(int j = 0; j < (int)grid[0].size(); j++){
            if(grid[i][j] <= k){
                res.push_back(grid[i][j]);
                k--;
                if(k == 0) return res;
            }
        }
    }
    return res;

    bool issame(vector<int> a,vector<int>b){
        if(a.size() != b.size()) return false;
        for(int i = 0; i < (int)a.size(); i++){
            if(a[i] != b[i]) return false;
        }
        return true;
    }
}