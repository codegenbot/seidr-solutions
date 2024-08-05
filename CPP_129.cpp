bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> minPath(vector<vector<int>> grid, int k){
    vector<int> result;
    for(int i = 0; i < k / 2; ++i){
        result.push_back(grid[0][0]);
        result.push_back(grid[0][1]);
    }
    return result;
}