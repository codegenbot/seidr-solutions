#include <vector>

int max_fill(std::vector<std::vector<int>> grid, int capacity) {
    int total_water = 0;
    for (const auto &row : grid) {
        for (int cell : row) {
            total_water += cell;
        }
    }
    
    int rows = grid.size();
    int cols = grid[0].size();
    
    int max_cups = 0;
    for (int i = 0; i < rows; ++i) {
        int cups = 0;
        for (int j = 0; j < cols; ++j) {
            if (grid[i][j] > capacity) {
                cups += capacity;
                grid[i][j] -= capacity;
            } else if (grid[i][j] > 0) {
                cups += grid[i][j];
                grid[i][j] = 0;
            }
        }
        
        max_cups = std::max(max_cups, cups);
    }
    
    return total_water / capacity == rows * cols ? -1 : max_cups;
}