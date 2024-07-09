#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n, INT_MAX));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!k && grid[i][j] == 1) return ({grid[i][j]});
            dp[i][j] = grid[i][j];
        }
    }
    
    vector<int> res;
    int x = 0, y = 0;
    for (int i = 0; i < k; i++) {
        if (i == k - 1) {
            res.push_back(grid[x][y]);
            break;
        }
        vector<pair<int, pair<int, int>>> nextSteps;
        if (x > 0) nextSteps.push_back({dp[i][j], {x-1, y}});
        if (x < n-1) nextSteps.push_back({dp[i][j], {x+1, y}});
        if (y > 0) nextSteps.push_back({dp[i][j], {x, y-1}});
        if (y < n-1) nextSteps.push_back({dp[i][j], {x, y+1}});
        
        sort(nextSteps.begin(), nextSteps.end());
        dp[x][y] = nextSteps[0].first;
        x = nextSteps[0].second.first;
        y = nextSteps[0].second.second;
    }
    
    res.push_back(grid[x][y]);
    return res;
}

int main() {
    vector<vector<int>> grid = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int k = 3;
    vector<int> result = minPath(grid, k);
    for (int i: result) cout << i << " ";
    return 0;
}