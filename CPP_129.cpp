#include <vector>
#include <algorithm>
#include <cassert>
#include <climits>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b);

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    int m = grid[0].size();

    vector<vector<int>> dp(n, vector<int>(m, INT_MAX));
    dp[0][0] = grid[0][0];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i > 0) dp[i][j] = min(dp[i][j], dp[i - 1][j] + grid[i][j]);
            if (j > 0) dp[i][j] = min(dp[i][j], dp[i][j - 1] + grid[i][j]);
        }
    }

    vector<int> path;
    int i = n - 1, j = m - 1;
    while (i >= 0 && j >= 0) {
        path.push_back(grid[i][j]);
        if (i == 0 && j == 0) break;
        if (i > 0 && dp[i][j] == dp[i - 1][j] + grid[i][j]) {
            i--;
        } else {
            j--;
        }
    }

    reverse(path.begin(), path.end());

    if (dp[n - 1][m - 1] <= k) {
        return path;
    } else {
        return {};
    }
}

int main() {
    assert(issame(minPath({{1, 3}, {3, 2}}, 10), vector<int>{1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));

    return 0;
}

bool issame(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}