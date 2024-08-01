#include <iostream>
#include <vector>

int main() {
    int max_fill(std::vector<std::vector<int>> grid, int capacity) {
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
                int fill = std::min(curr, capacity);
                ans++;
                curr -= fill;
            }
        }
        return ans;
    }

    // Test the function
    std::vector<std::vector<int>> grid = {{0, 1, 0}, {1, 1, 1}, {0, 1, 0}};
    int capacity = 2;

    int result = max_fill(grid, capacity);

    std::cout << "Maximum number of times to fill: " << result << std::endl;
    return 0;
}