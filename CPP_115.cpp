```cpp
#include <vector>

int max_fill(std::vector<std::vector<int>> grid) {
    int max = 0;
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[0].size(); j++) {
            if (grid[i][j] == 1) {
                int count = 0;
                for (int k = -1; k <= 1; k++) {
                    for (int l = -1; l <= 1; l++) {
                        if ((k == 0 && l == 0) || i + k < 0 || j + l < 0 || i + k >= grid.size() || j + l >= grid[0].size()) continue;
                        if (grid[i + k][j + l] == 1) count++;
                    }
                }
                max = std::max(max, count);
            }
        }
    }
    return max;
}