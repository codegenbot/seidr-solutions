```c++
#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

std::vector<int> minPath(std::vector<std::vector<int>> grid, int k) {
    int n = grid.size();
    std::vector<std::vector<bool>> visited(n, std::vector<bool>(n, false));
    std::vector<int> res;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (!visited[i][j]) {
                dfs(grid, visited, i, j, k, &res);
            }
        }
    }
    return res;
}

void dfs(std::vector<std::vector<int>>& grid, std::vector<std::vector<bool>>& visited, int i, int j, int k, std::vector<int>* res) {
    (*res).push_back(grid[i][j]);
    visited[i][j] = true;
    if (k > 1) {
        for (int x = std::max(0, i - 1); x <= std::min(i + 1, grid.size() - 1); ++x) {
            for (int y = std::max(0, j - 1); y <= std::min(j + 1, grid[0].size() - 1); ++y) {
                if (!visited[x][y]) {
                    dfs(grid, visited, x, y, k - 1, res);
                    return;
                }
            }
        }
    }
}

int main() {
    // your code here
    return 0;
}