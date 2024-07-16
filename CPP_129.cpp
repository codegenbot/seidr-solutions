bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> path;
    for (int i = 0; i < k; ++i) {
        for (const auto& row : grid) {
            path.insert(path.end(), row.begin(), row.end());
        }
    }
    return path;
}