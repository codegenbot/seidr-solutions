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
    vector<vector<int>> grid = {{3, 5, 2}, {4, 7, 1}, {1, 2, 1}};
    int capacity = 10;

    int result = calculateBucketsNeeded(grid, capacity);
    cout << "Buckets needed: " << result << endl;

    return 0;
}