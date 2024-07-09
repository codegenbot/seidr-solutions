int max_fill(vector<vector<int>>& grid, int capacity) {
    int rows = grid.size();
    int cols = grid[0].size();
    int total_water = 0;
    int total_buckets = 0;
    
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            total_water += grid[i][j];
        }
    }
    
    total_buckets = total_water / capacity;
    if (total_water % capacity != 0) {
        total_buckets++;
    }
    
    return total_buckets;
}

int main() {
    assert (max_fill({{1,1,1,1}, {1,1,1,1}}, 9) == 2);
}