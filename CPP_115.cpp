int max_fill(vector<vector<int>> grid, int capacity) {
    int totalMoves = 0;
    
    for (int col = 0; col < grid[0].size(); ++col) {
        int waterLevel = 0;
        for (int row = 0; row < grid.size(); ++row) {
            waterLevel += grid[row][col];
            if (waterLevel >= capacity) {
                totalMoves++;
                waterLevel = 0;
            }
        }
        totalMoves += waterLevel > 0 ? 1 : 0;
    }
    
    return totalMoves;
}