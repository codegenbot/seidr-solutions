#include <vector>
#include <algorithm>

using namespace std;

int smallest_change(vector<int> arr) {
    int n = arr.size();
    vector<vector<int>> dp(n, vector<int>(n, 0));
    
    for (int i = 0; i < n; i++) {
        dp[i][i] = 0;
    }
    
    for (int len = 2; len <= n; len++) {
        for (int i = 0; i <= n - len; i++) {
            int j = i + len - 1;
            
            if (arr[i] == arr[j]) {
                dp[i][j] = dp[i+1][j-1];
            } else {
                dp[i][j] = 1 + min({dp[i+1][j], dp[i][j-1], dp[i+1][j-1]});
            }
        }
    }
    
    return dp[0][n-1];
}