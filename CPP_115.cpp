int max_fill(vector<vector<int>>& grid, int capacity) {
    int rows = grid.size();
    int cols = grid[0].size();
    int total_water = 0;

    for (int j = 0; j < cols; j++) {
        int max_water = 0;
        for (int i = 0; i < rows; ++i) {
            max_water = max(max_water, grid[i][j]);
        }
        total_water += max_water;
    }

    int num_operations = 0;
    while (total_water > 0) {
        total_water -= min(total_water, capacity);
        num_operations++;
    }

    return num_operations;
}

int main() {
    // Main function implementation
    return 0;
}