#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<std::vector<int>> grid(n);
    for (int i = 0; i < n; i++) {
        int m;
        std::cin >> m;
        grid[i].resize(m);

        for (int j = 0; j < m; j++) {
            int val;
            std::cin >> val;
            grid[i][j] = (val == 1);
        }
    }

    int capacity;
    std::cin >> capacity;

    int ans = max_fill(grid, capacity);

    std::cout << ans << std::endl;

    return 0;
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