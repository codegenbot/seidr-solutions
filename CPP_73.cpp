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
                dp[i][j].push_back(dp[i+1][j-1].size());
            } else {
                dp[i][j].push_back(min({dp[i+1][j].size() + 1, dp[i][j-1].size() + 1, dp[i+1][j-1].size() + 2}));
            }
        }
    }
    
    return (int)dp[0][n-1].size();
}

int main() { return smallest_change({0, 1}); }