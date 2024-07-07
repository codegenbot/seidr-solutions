#include <vector>
using namespace std;

int smallest_change(vector<int> arr) {
    int n = arr.size();
    vector<vector<int>> dp(n, vector<int>(n));
    
    for (int i = 0; i < n; i++) {
        dp[i][i] = 0;
    }
    
    for (int len = 2; len <= n; len++) {
        for (int i = 0; i < n - len + 1; i++) {
            int j = i + len - 1;
            
            if (arr[i] == arr[j]) {
                dp[i][j] = dp[i + 1][j - 1];
            } else {
                dp[i][j] = 1 + min({dp[i + 1][j], dp[i][j - 1]}, std::min({dp[i + 1][j - 1]}));
            }
        }
    }
    
    if (dp[0][n - 1] > n) {
        throw runtime_error("Invalid input. The minimum number of operations to make all elements equal cannot exceed the size of the array.");
    }
    
    return dp[0][n - 1];
}