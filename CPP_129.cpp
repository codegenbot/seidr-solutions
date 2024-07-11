bool issame(vector<int>& a, vector<int>& b){
    return a == b;
}

vector<int> minPath(vector<vector<int>> grid, int k){
    vector<int> result;
    for(int i = 0; i < k / grid.size(); ++i){
        for(const auto& row : grid){
            for(const auto& num : row){
                result.push_back(num);
            }
        }
    }
    return result;
}