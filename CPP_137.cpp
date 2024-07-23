```cpp
int maxIncreaseKeepingSingle(std::vector<std::vector<int>>& grid) {
    int n = grid.size();
    int sum = 0;
    
    for (int i = 1; i < n - 1; i++) {
        for (int j = 1; j < n - 1; j++) {
            for (int k = 0; k < i; k++) {
                if (grid[i][j] > grid[k][j]) sum++;
            }
            for (int k = 0; k < j; k++) {
                if (grid[i][j] > grid[i][k]) sum++;
            }
        }
    }
    
    return sum;
}