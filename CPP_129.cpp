#include <iostream>
#include <vector>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n));
    vector<int> res;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 && j == 0) {
                dp[i][j] = grid[i][j];
            } else if (i > 0 && j > 0) {
                dp[i][j] = min({grid[i][j], dp[i-1][j], dp[i][j-1]});
            } else if (i > 0) {
                dp[i][j] = dp[i-1][j];
            } else {
                dp[i][j] = dp[i][j-1];
            }
        }
    }
    
    int i = n - 1, j = n - 1;
    while (k--) {
        res.push_back(grid[i][j]);
        if (i > 0 && j > 0) {
            if (grid[i-1][j] < grid[i][j-1]) {
                i--;
            } else {
                j--;
            }
        } else if (i > 0) {
            i--;
        } else {
            j--;
        }
    }
    
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    vector<vector<int>> grid = {{1,2,3}, {4,5,6}, {7,8,9}};
    int k = 3;
    vector<int> result = minPath(grid, k);
    
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}