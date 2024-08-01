```cpp
#include <vector>

int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int water = 0;
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] == 1) {
                water += capacity;
            } else if (water > 0) {
                ans++;
                water -= capacity;
            }
        }
        if (water > 0) {
            ans++;
            water = 0;
        }
    }
    return ans;
}