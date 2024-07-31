#include <vector>
int max_fill(vector<vector<int>> grid, int capacity) {
    int totalWater = 0;
    int moves = 0;
    
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            totalWater += grid[i][j];
        }
    }
    
    while (totalWater > 0) {
        totalWater -= capacity * grid.size();
        moves++;
    }
    
    return moves;
}