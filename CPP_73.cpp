#include <vector>

int smallest_change(vector<int> arr) {
    int n = arr.size();
    using namespace std;
    vector<vector<int>> dp(n, vector<int>(n, 0));
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j) {
            if (arr[j] == arr[n - 1 - i + j]) {
                dp[i][j] = dp[i - 1][j - 1];
            } else {
                dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + 1;
            }
        }
    }
    
    return dp[n - 1][0];
}