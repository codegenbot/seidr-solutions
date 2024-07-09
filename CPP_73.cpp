#include <iostream>
#include <vector>

using namespace std;

int smallest_change(vector<int> arr) {
    int n = arr.size();
    vector<vector<vector<int>>> dp(n, vector<vector<int>>(n, vector<int>(2)));
    
    for (int i = 0; i < n; i++) {
        dp[i][i][0] = 0;
    }
    
    for (int length = 2; length <= n; length++) {
        for (int i = 0; i < n - length + 1; i++) {
            int j = i + length - 1;
            
            if (arr[i] == arr[j]) {
                dp[i][j][0] = 0;
            } else {
                dp[i][j][0] = 1 + min(dp[i+1][j-1][0], max(dp[i+1][j-1][1], dp[i][j-1][1]));
                dp[i][j][1] = 1;
            }
        }
    }
    
    return dp[0][n-1][0];
}

int main() {
    assert(smallest_change({0, 1}) == 1);
    return 0;
}