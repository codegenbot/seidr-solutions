#include <iostream>
#include <vector>
using namespace std;

vector<int> minPath(vector<vector<int>>& grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n, 1e9));
    vector<vector<char>> directions({{-1, 0}, {1, 0}, {0, -1}, {0, 1}});
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (k == 1) {
                dp[i][j] = grid[i][j];
            } else {
                for (auto dir : directions) {
                    int ni = i + dir[0], nj = j + dir[1];
                    if (ni >= 0 && ni < n && nj >= 0 && nj < n) {
                        dp[i][j] = min(dp[i][j], grid[ni][nj]);
                    }
                }
            }
        }
    }
    
    vector<int> res;
    int i = 0, j = 0;
    for (int _ = 0; _ < k; _++) {
        res.push_back(grid[i][j]);
        if (_ == k - 1) break;
        
        vector<pair<int, int>> nextPoses;
        for (auto dir : directions) {
            int ni = i + dir[0], nj = j + dir[1];
            if (ni >= 0 && ni < n && nj >= 0 && nj < n) {
                nextPoses.push_back({dp[ni][nj], ni, nj});
            }
        }
        
        sort(nextPoses.begin(), nextPoses.end());
        tie(i, j) = make_pair(nextPoses[0].second, nextPoses[0].first);
    }
    
    return res;
}

int main() {
    assert(minPath({{1, 3}, {3, 2}}, 10) == vector<int>(1, 3, 1, 3, 1, 3, 1, 3, 1, 3));
    return 0;
}