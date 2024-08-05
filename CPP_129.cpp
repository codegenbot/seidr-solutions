bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> minPath(vector<vector<int>> grid, int k){
    vector<int> path;
    while(k > 0){
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[i].size(); j++){
                path.push_back(grid[i][j]);
                k--;
                if(k == 0) break;
            }
            if(k == 0) break;
        }
    }
    return path;
}