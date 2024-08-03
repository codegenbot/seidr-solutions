#include <vector>
#include <algorithm>

using namespace std;

int smallest_change(vector<int> arr) {
    int n = arr.size();
    vector<vector<int>> dp(n, vector<int>(n));
    
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

int main() {
    assert (smallest_change({0, 1}) == 1);
    return 0;
}