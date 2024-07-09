bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> minPath(vector<vector<int>> grid, int k){
    vector<int> result;
    for(int i = 0; i < k; i++){
        for(int j = 0; j < grid.size(); j++){
            for(int m = 0; m < grid[j].size(); m++){
                result.push_back(grid[j][m]);
            }
        }
    }
    return result;
}