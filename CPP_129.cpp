#include <vector>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n));
    vector<int> res;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (k == 1) {
                dp[i][j] = grid[i][j];
            } else {
                int min_val = INT_MAX;
                if (i > 0) min_val = min(min_val, dp[i-1][j]);
                if (j > 0) min_val = min(min_val, dp[i][j-1]);
                if (i < n - 1) min_val = min(min_val, dp[i+1][j]);
                if (j < n - 1) min_val = min(min_val, dp[i][j+1]);
                dp[i][j] = grid[i][j] + min_val;
            }
        }
    }
    
    int min_idx = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (dp[i][j] == dp[0][0]) break;
            else min_idx++;
        }
        if (min_idx > 0) break;
    }
    
    int cur_val = grid[min_idx][0];
    for (int i = 1; i <= k; i++) {
        res.push_back(cur_val);
        if (i < k) {
            int next_min_idx = -1;
            if (min_idx > 0 && min_idx % n != 0) {
                if (dp[min_idx-1][0] == dp[0][0]) next_min_idx = min_idx - 1;
            }
            if (next_min_idx == -1) next_min_idx = min_idx;
            if (min_idx < n - 1 && min_idx % n != n-1) {
                if (dp[min_idx+1][0] == dp[0][0]) next_min_idx = min_idx + 1;
            }
            if (next_min_idx == -1) next_min_idx = min_idx;
            if (next_min_idx != min_idx) {
                cur_val = grid[next_min_idx][0];
                min_idx = next_min_idx;
            } else {
                break;
            }
        }
    }
    
    return res;
}