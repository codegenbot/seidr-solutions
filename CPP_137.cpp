```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int maxIncreaseKeepingSingle(std::vector<std::vector<int>>& grid) {
    int n = grid.size();
    for (int i = 0; i < n; i++) {
        std::sort(grid[i].begin(), grid[i].end());
    }
    
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(i == 0 || j == 0 || i == n-1 || j == n-1) {
                continue;
            }
            sum += grid[i][j];
        }
    }
    
    return sum;
}