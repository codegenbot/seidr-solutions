```cpp
#include <vector>
#include <algorithm>

int smallest_change(std::vector<int> arr) {
    int n = arr.size();
    std::vector<std::vector<int>> dp(n, std::vector<int>(n));
    
    for (int i = 0; i < n; i++) {
        dp[i][i] = 0;
    }
    
    for (int length = 2; length <= n; length++) {
        for (int i = 0; i <= n - length; i++) {
            int j = i + length - 1;
            
            if (arr[i] == arr[j]) {
                dp[i][j].push_back(0);
            } else {
                int min_change = INT_MAX;
                
                for (int k = i; k <= j; k++) {
                    int change = dp[i][k-1].size() + dp[k+1][j].size() + 1;
                    if (change < min_change) {
                        min_change = change;
                    }
                }
                
                dp[i][j] = min_change;
            }
        }
    }
    
    return dp[0][n-1].size();
}