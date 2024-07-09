#include <vector>

using namespace std;

int smallest_change(vector<int> arr) {
    int n = arr.size();
    vector<vector<int>> dp(n, vector<int>(n));
    
    for (int i = 0; i < n; i++) {
        dp[i][i] = arr[i];
    }
    
    for (int length = 2; length <= n; length++) {
        for (int i = 0; i < n - length + 1; i++) {
            int j = i + length - 1;
            if (arr[i] == arr[j]) {
                dp[i][j] = 0;
            } else {
                int minChange = INT_MAX;
                for (int k = i; k <= j; k++) {
                    int change = dp[i][k-1] + dp[k+1][j] + (arr[i] != arr[j]) ? 1 : 0;
                    if (change < minChange) {
                        minChange = change;
                    }
                }
                dp[i][j] = minChange;
            }
        }
    }
    
    return dp[0][n-1];
}