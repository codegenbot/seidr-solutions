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
        
        const auto& nextPoses = sort((vector<pair<int, int>>()){{dp[i][j], i, j}}, [](const pair<int, int>& a, const pair<int, int>& b){return a.first > b.first;});
        int ni = nextPoses[0].second;
        int nj = nextPoses[0].first;
        
        i = ni;
        j = nj;
    }
    
    return res;
}