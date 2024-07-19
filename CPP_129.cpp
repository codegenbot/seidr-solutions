#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> minPath(const std::vector<std::vector<int>>& grid, int k) {
    std::vector<int> result;
    int n = grid.size();
    if (n == 0) return result;
    int m = grid[0].size();
    
    for (int i = 0; i < k / 2; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int l = 0; l < m; ++l) {
                result.push_back(grid[j][l]);
            }
        }
    }

    return result;
}

int main() {
    assert(issame(minPath({{1, 3}, {3, 2}}, 10), {1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));
    return 0;
}