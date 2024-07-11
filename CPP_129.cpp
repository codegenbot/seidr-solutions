bool issame(vector<int>& a, vector<int>& b){
    return a == b;
}

vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    vector<int> result;
    for(int i = 0; i < k; ++i){
        for(int j = 0; j < n; ++j){
            result.push_back(grid[j][i % 2]);
        }
    }
    return result;
}