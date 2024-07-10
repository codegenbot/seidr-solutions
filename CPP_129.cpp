```cpp
#include <vector>
#include <algorithm>

bool minPath(std::vector<std::vector<int>>& grid) {
    int m = grid.size();
    if (m == 0) return true;
    int n = grid[0].size();

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == 1) {
                if (i > 0 && grid[i - 1][j] == 1) continue;
                if (j > 0 && grid[i][j - 1] == 1) continue;

                grid[i][j] = 2;
            }
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == 1) return false;
        }
    }

    return true;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(issame({1, 3}, minPath({{1, 3}, {3, 2}})) );
    return 0;
}