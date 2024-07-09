bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> minPath(vector<vector<int>> grid, int k){
    vector<int> result;
    for (int i = 0; i < k/2; ++i) {
        for (const auto& row : grid) {
            for (int val : row) {
                result.push_back(val);
            }
        }
    }
    return result;
}

// Test the function
assert(issame(minPath({{1, 3}, {3, 2}}, 10), {1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));