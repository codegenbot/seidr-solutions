```cpp
vector<vector<int>> minPath(vector<vector<int>> grid, int k) {
    vector<vector<int>> result;
    for (int i = 0; i < grid.size(); ++i) {
        vector<int> row;
        for (int j = 0; j < grid[i].size(); ++j) {
            if (grid[i][j] <= k) {
                row.push_back(grid[i][j]);
            } else {
                row.push_back(k);
            }
        }
        result.push_back(row);
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}