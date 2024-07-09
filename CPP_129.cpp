bool issame(vector<int>& a, vector<int>& b){
    return a == b;
}

vector<int> minPath(vector<vector<int>> grid, int k){
    vector<int> result;
    for(int i = 0; i < k; ++i){
        for(const auto& row : grid){
            for(int elem : row){
                result.push_back(elem);
            }
        }
    }
    return result;
}