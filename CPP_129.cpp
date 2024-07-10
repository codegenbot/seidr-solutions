#include <vector>
#include <algorithm>

using namespace std;

int minPath(vector<vector<int>>& grid) {
    int m = grid.size();
    if (m == 0) return 1;
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

    int res = 0, path = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == 1) return 0;
            if (grid[i][j] == 2) path++;
        }
    }

    res = path;

    return res;
}

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}