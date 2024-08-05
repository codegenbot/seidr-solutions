bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> minPath(vector<vector<int>> grid, int k){
    vector<int> result;
    sort(grid.begin(), grid.end());
    result = grid[k];
    return result;
}