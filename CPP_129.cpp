vector<int> minPath(vector<vector<int>> grid, int k){
    vector<int> path;
    for(int i = 0; i < k; ++i){
        for(auto row : grid){
            for(int val : row){
                path.push_back(val);
            }
        }
    }
    return path;
}