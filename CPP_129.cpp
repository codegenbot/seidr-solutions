bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> path;
    for (int i = 0; i <= k; ++i) {
        for (int j = 0; j < grid.size(); ++j) {
            for (int c = 0; c < grid[j].size(); ++c) {
                path.push_back(grid[j][c]);
            }
        }
    }
    
    return path;
}