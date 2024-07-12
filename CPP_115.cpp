Here is the completed code:

int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int result = 0;
    for (int i = 0; i < n; i++) {
        int totalWater = 0;
        for (int j = 0; j < grid[0].size(); j++) {
            if (grid[i][j] == 1) {
                totalWater++;
            }
        }
        while (totalWater > capacity) {
            result += capacity;
            totalWater -= capacity;
        }
        if (totalWater > 0) {
            result += totalWater;
        }
    }
    return result;
}