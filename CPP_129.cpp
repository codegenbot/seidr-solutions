vector<int> minPath(vector<vector<int>> grid, int k){
    vector<int> res;
    for(int i = 0; i < k; i++){
        for(auto row : grid){
            for(int val : row){
                res.push_back(val);
            }
        }
    }
    return res;
}