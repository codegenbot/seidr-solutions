bool issame(vector<vector<int>>& grid, int k) {
    int N = grid.size();
    return (k % N == 0);
}

vector<int> minPath(vector<vector<int>>& grid, int k) {
    int N = grid.size();
    vector<int> result;
    for (int i = 0; i < k; ++i) {
        int row = i % N;
        int col = i / N;
        if (col % 2 == 0) {
            result.push_back(grid[row][col]);
        } else {
            result.push_back(grid[N - row - 1][col]);
        }
    }
    return result;
}

int main() {
    vector<vector<int>> grid = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int k = 6;
    
    bool same = issame(grid, k);
    
    vector<int> result = minPath(grid, k);
    
    return 0;
}