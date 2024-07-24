#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int smallest_change(vector<int> arr) {
    int n = arr.size();
    vector<vector<int>> dp(n, vector<int>(n, 0));
    
    for (int i = 0; i < n; i++) {
        for (int j = i; j >= 0; j--) {
            if (i == j)
                dp[i][j] = arr[i];
            else
                dp[i][j] = arr[i] + abs(arr[i] - dp[i-1][j-1]);
        }
    }
    
    int min_changes = INT_MAX;
    for (int i = 0; i < n; i++) {
        min_changes = min(min_changes, dp[i][n-i-1]);
    }
    
    return min_changes;
}