bool issame(vector<vector<int>> grid1, vector<vector<int>> grid2) {
    if(grid1.size() != grid2.size() || grid1[0].size() != grid2[0].size()) {
        return false;
    }
    for(int i = 0; i < (int)grid1.size(); i++){
        for(int j = 0; j < (int)grid1[0].size(); j++){
            if(grid1[i][j] != grid2[i][j]) return false;
        }
    }
    return true;
}