bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> minPath(vector<vector<int>> grid, int k) {
    int m = grid.size();
    int n = grid[0].size();
    
    vector<int> path;
    
    for (int i = 0; i < m * n - 1; ++i) {
        path.push_back(grid[i / n][i % n]);
        if (i > 0 && path[i] < path[i - 1])
            grid[i / n][i % n] += path[i - 1] - path[i] + k;
    }
    
    path.push_back(grid[(m * n - 1) / n][(m * n - 1) % n]);
    
    return path;
}