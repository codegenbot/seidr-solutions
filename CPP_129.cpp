vector<int> minPath(vector<vector<int>>& grid, int k){
    int n = grid.size();
    vector<int> res;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            if(res.empty() || res.back() != grid[i][j]) {
                res.push_back(grid[i][j]);
                k--;
                if(k == 0) return res;
                int dir[8] = {1, -1, n, -n, n+1, -n-1, n+1, -n-1};
                for(int d = 0; d < 8; ++d) {
                    int ni = i + dir[d]/n, nj = j + dir[d]%n;
                    if(ni >= 0 && ni < n && nj >= 0 && nj < n) {
                        if(k > 1) {
                            res.push_back(grid[ni][nj]);
                            k--;
                            if(k == 0) return res;
                        } else {
                            res.push_back(grid[ni][nj]);
                            return res;
                        }
                    }
                }
            }
        }
    }
    return res;
}