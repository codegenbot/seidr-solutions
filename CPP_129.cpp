bool issame(vector<int>& a, vector<int>& b){
    return a == b;
}

vector<int> minPath(vector<vector<int>> grid, int k){
    vector<int> path;
    for(int i = 0; i < k / grid.size(); i++){
        for(auto& row : grid){
            for(auto num : row){
                path.push_back(num);
            }
        }
    }
    return path;
}