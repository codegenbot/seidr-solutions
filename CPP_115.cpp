#include <iostream>
#include <vector>

int max_fill(std::vector<std::vector<int>> grid, int capacity) {
    int n = grid.size();
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int water = 0;
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] == 1) {
                water += 1;
            }
        }
        while (water > 0) {
            int bucket = std::min(water, capacity);
            water -= bucket;
            ans++;
            capacity = std::max(0, capacity - bucket);
        }
    }
    return ans;
}

int main() {
    int n, m, k;
    std::cin >> n >> m >> k;
    std::vector<std::vector<int>> grid(n, std::vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> grid[i][j];
        }
    }
    int result = max_fill(grid, k);
    std::cout << result << std::endl;
    return 0;
}