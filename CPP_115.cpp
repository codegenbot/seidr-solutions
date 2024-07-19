int calculateBucketsNeeded(const vector<vector<int>>& grid, int capacity) {
    int rows = grid.size();
    int cols = grid[0].size();
    int total_water = 0;
    
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            total_water += grid[i][j];
        }
    }
    
    int buckets_needed = total_water / capacity;
    if (total_water % capacity != 0) {
        buckets_needed++;
    }
    
    return buckets_needed;
}

int main() {
    // Input grid initialization
    vector<vector<int>> grid = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    
    // Capacity for buckets
    int capacity = 5;
    
    // Calculate and output buckets needed
    int buckets_needed = calculateBucketsNeeded(grid, capacity);
    cout << "Buckets needed: " << buckets_needed << endl;
    
    return 0;
}