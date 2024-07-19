vector<int> minPath(vector<vector<int>> grid, int k){
    vector<int> result;
    
    for(auto row : grid){
        for(auto col : row){
            if(col <= k){
                result.push_back(col);
            }
        }
    }
    
    return result;
}