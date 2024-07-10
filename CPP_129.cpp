#include <vector>
#include <functional>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n, 1e9));
    vector<vector<bool>> visited(n, vector<bool>(n, false));

    auto dfs = [&](int i, int j) -> vector<int> { 
        if (visited[i][j]) return {};
        visited[i][j] = true;

        for (int x : {i-1, i+1}) {
            for (int y : {j-1, j+1}) {
                if (x >= 0 && x < n && y >= 0 && y < n) {
                    dp[i][j] = min(dp[i][j], dp[x][y]);
                }
            }
        }

        vector<int> path;
        for (int i = 0; i <= k; i++) {
            int val = -1;
            for (int x : {i-1, i+1}) {
                for (int y : {j-1, j+1}) {
                    if (x >= 0 && x < n && y >= 0 && y < n) {
                        if (!visited[x][y]) continue;
                        val = grid[x][y];
                        break;
                    }
                }
            }
            path.push_back(val);
        }

        return path;
    };

    vector<int> res = dfs(0, 0);
    for (int i = 1; i < n; i++) {
        for (int j : {0, n-1}) {
            if (!visited[i][j]) continue;
            vector<int> path = dfs(i, j);
            if (path.size() > res.size()) res = path;
        }
    }

    return res;
}