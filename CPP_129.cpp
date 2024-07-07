vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    vector<int> res;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(grid[i][j] == 1){
                vector<vector<bool>> visited(n, vector<bool>(n));
                queue<pair<int, int>> q;
                q.push({i, j});
                visited[i][j] = true;
                res.push_back(1);
                for(int l = 0; l < k; l++){
                    int size = q.size();
                    for(int m = 0; m < size; m++){
                        pair<int, int> p = q.front(); q.pop();
                        if(p.first > 0 && !visited[p.first-1][p.second]){
                            q.push({p.first-1, p.second});
                            visited[p.first-1][p.second] = true;
                            res.push_back(grid[p.first-1][p.second]);
                        }
                        if(p.first < n-1 && !visited[p.first+1][p.second]){
                            q.push({p.first+1, p.second});
                            visited[p.first+1][p.second] = true;
                            res.push_back(grid[p.first+1][p.second]);
                        }
                        if(p.second > 0 && !visited[p.first][p.second-1]){
                            q.push({p.first, p.second-1});
                            visited[p.first][p.second-1] = true;
                            res.push_back(grid[p.first][p.second-1]);
                        }
                        if(p.second < n-1 && !visited[p.first][p.second+1]){
                            q.push({p.first, p.second+1});
                            visited[p.first][p.second+1] = true;
                            res.push_back(grid[p.first][p.second+1]);
                        }
                    }
                }
            }
        }
    }
    return res;
}