#include <iostream>
#include <vector>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n, 0));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (k == 1) {
                dp[i][j] = grid[i][j];
            } else {
                int minVal = INT_MAX;
                if (i > 0) minVal = min(minVal, dp[i-1][j]);
                if (j > 0) minVal = min(minVal, dp[i][j-1]);
                if (i < n - 1) minVal = min(minVal, dp[i+1][j]);
                if (j < n - 1) minVal = min(minVal, dp[i][j+1]);
                dp[i][j] = grid[i][j] + minVal;
            }
        }
    }
    
    int i = 0, j = 0;
    while (k > 0) {
        if (i > 0 && j < n - 1 && (dp[i-1][j+1] < dp[i][j+1])) {
            i--;
            k--;
        } else if (i < n - 1 && j > 0 && (dp[i+1][j-1] < dp[i][j-1])) {
            j--;
            k--;
        } else if (i > 0 && j > 0 && (dp[i-1][j-1] < dp[i][j-1])) {
            i--;
            j--;
            k -= 2;
        } else if (i < n - 1 && j < n - 1 && (dp[i+1][j+1] < dp[i][j+1])) {
            i++;
            j++;
            k -= 2;
        } else if (i > 0) {
            i--;
            k--;
        } else {
            j--;
            k--;
        }
    }
    
    vector<int> res;
    while (k > 0) {
        res.push_back(grid[i][j]);
        if (k == 1) break;
        if (i < n - 1 && j < n - 1 && grid[i+1][j+1] <= grid[i][j]) {
            i++;
            j++;
            k -= 2;
        } else if (i > 0 && j < n - 1 && grid[i-1][j+1] <= grid[i][j]) {
            i--;
            j++;
            k -= 2;
        } else if (i < n - 1 && j > 0 && grid[i+1][j-1] <= grid[i][j]) {
            i++;
            j--;
            k -= 2;
        } else if (i > 0 && j > 0 && grid[i-1][j-1] <= grid[i][j]) {
            i--;
            j--;
            k -= 2;
        } else if (i < n - 1) {
            i++;
            k--;
        } else {
            j--;
            k--;
        }
    }
    
    return res;
}

int main() {
    vector<vector<int>> grid = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int k = 3;
    vector<int> result = minPath(grid, k);
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}