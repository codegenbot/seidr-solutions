vector<int> minPath(vector<vector<int>> grid, int k){
    vector<int> path;
    int n = grid.size();
    int r = 0, c = 0, dir = 1;
    for(int i=0; i<k; ++i){
        path.push_back(grid[r][c]);
        if((r+dir < 0 || r+dir >= n) || (c+dir < 0 || c+dir >= n) || find(path.begin(), path.end(), grid[r+dir][c]) != path.end())
            dir *= -1;
        r += dir;
        c += dir;
    }
    return path;
}