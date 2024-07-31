vector<int> minPath(vector<vector<int>> grid, int k){
    vector<int> result;
    for(int i = 0; i < k; ++i){
        for(auto row : grid){
            for(int num : row){
                result.push_back(num);
            }
        }
    }
    return result;
}