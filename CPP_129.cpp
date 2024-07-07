vector<int> minPath(vector<vector<int>> grid, int k){
    vector<int> res;
    for(int i = 0; i < (int)grid.size(); i++){
        for(int j = 0; j < (int)grid[0].size(); j++){
            if(grid[i][j] <= k){
                res.push_back(grid[i][j]);
                k--;
                while(k > 0 && !res.empty()){
                    int last = res.back();
                    res.pop_back();
                    for(int x = -1; x <= 1; x++){
                        for(int y = -1; y <= 1; y++){
                            if(abs(x) + abs(y) == 1){
                                int nx = i + x;
                                int ny = j + y;
                                if(nx >= 0 && ny >= 0 && nx < (int)grid.size() && ny < (int)grid[0].size()){
                                    if(grid[nx][ny] > last){
                                        res.push_back(last);
                                        k--;
                                        i = nx;
                                        j = ny;
                                        break;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return res;
}