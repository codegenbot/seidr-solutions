int max_fill(const vector<vector<int>>& grid, int capacity) {
    int rows = grid.size();
    int cols = grid[0].size();
    int count = 0;
    
    for (int j = 0; j < cols; ++j) {
        int water = 0;
        for (int i = 0; i < rows; ++i) {
            water += grid[i][j];
        }
        count += (water / capacity) + (water % capacity != 0);
    }
    
    return count;
}

int main() {
    const vector<vector<int>> grid = {{1,1,1,1}, {1,1,1,1}};
    int capacity = 9;
    
    assert(max_fill(grid, capacity) == 2);
    return 0;
}