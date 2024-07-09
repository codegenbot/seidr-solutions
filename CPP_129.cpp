```
#include <vector>
#include <climits>

bool issame(vector<int> a,vector<int>b){
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size();i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        dp[i][0] = grid[i][0];
        dp[0][i] = grid[0][i];
    }
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            int minVal = INT_MAX;
            if (grid[i-1][j] < minVal) minVal = grid[i-1][j];
            if (grid[i][j-1] < minVal) minVal = grid[i][j-1];
            dp[i][j] = minVal;
        }
    }
    vector<int> res(k);
    int cur = INT_MAX;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (dp[i][j] == cur) {
                for(int x=0;x<k;x++){
                    res[x] = grid[i][j];
                }
                return res;
            }
        }
    }
    return {};
}