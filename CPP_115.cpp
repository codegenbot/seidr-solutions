#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> grid = {{1,0,1},{1,1,0},{0,1,0}};
    int capacity = 2;
    
    int ans = max_fill(grid, capacity);
    std::cout << "Maximum number of times the water tank can be filled: " << ans << "\n";
}

int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int curr = 0;
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] == 1) {
                curr += 1;
            }
        }
        while (curr > 0) {
            int fill = min(curr, capacity);
            ans++;
            curr -= fill;
        }
    }
    return ans;
}