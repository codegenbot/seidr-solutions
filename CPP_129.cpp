vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    vector<int> res;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(res.size() == k){
                return res;
            }
            res.push_back(grid[i][j]);
            if(res.size() > k){
                res.pop_back();
            }
            vector<pair<int,int>> directions = {{-1,0},{1,0},{0,-1},{0,1}};
            for(auto& dir : directions){
                int ni = i + dir.first;
                int nj = j + dir.second;
                if(ni >= 0 && ni < n && nj >= 0 && nj < n){
                    res.push_back(grid[ni][nj]);
                    if(res.size() > k){
                        res.pop_back();
                    }
                }
            }
        }
    }
    return res;
}