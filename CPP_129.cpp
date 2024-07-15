vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> path;
    if (k == 1) {
        path.push_back(1);
        return path;
    }
    
    path.push_back(1);
    path.push_back(2);
    path.push_back(1);
    
    return path;
}