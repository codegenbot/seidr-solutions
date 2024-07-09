#include <vector>

int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int fill = 0;
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] == 1) {
                fill++;
            }
        }
        while (fill > 0) {
            int to_fill = min(fill, capacity);
            ans += to_fill;
            fill -= to_fill;
            capacity = max(0, capacity - to_fill);
        }
    }
    return ans;