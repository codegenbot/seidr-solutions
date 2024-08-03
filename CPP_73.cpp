```cpp
#include <vector>
#include <algorithm>

int smallest_change(vector<int> arr) {
    int n = arr.size();
    vector<vector<int>> dp(n, vector<int>(n));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (i == j)
                dp[i][j] = 0;
            else if (arr[j] == arr[n - 1 - i + j])
                dp[i][j] = dp[i - 1][j - 1];
            else
                dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + 1;
        }
    }
    
    return dp[n - 1][0];
}

int main() {
    vector<int> coins = {1, 2, 5};
    cout << "Smallest change: " << smallest_change(coins) << endl;
    return 0;
}