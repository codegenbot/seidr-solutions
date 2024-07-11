vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    vector<int> res;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(grid[i][j] == 1){
                vector<pair<int,int>> dir = {{-1,0},{1,0},{0,-1},{0,1}};
                queue<pair<int,int>> q;
                q.push({i,j});
                int cnt = 0;
                while(!q.empty() && cnt < k){
                    pair<int,int> p = q.front(); q.pop();
                    res.push_back(grid[p.first][p.second]);
                    for(auto d : dir){
                        int x = p.first + d.first, y = p.second + d.second;
                        if(x >= 0 && x < n && y >= 0 && y < n && grid[x][y] > 0){
                            q.push({x,y});
                            grid[x][y]--;
                        }
                    }
                    cnt++;
                }
                if(cnt == k) break;
            }
        }
    }
    return res;
}