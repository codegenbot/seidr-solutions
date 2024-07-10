#include <vector>
#include <algorithm>

using namespace std;

int smallest_change(vector<int> arr) {
    int n = arr.size();
    vector<vector<bool>> dp(n, vector<bool>(n, false));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (i == j)
                dp[i][j] = true;
            else
                dp[i][j] = arr[j] == arr[i];
        }
    }
    
    int ans = n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (!dp[n-1-j][n-1-i])
                ans = min(ans, 1 + (j > 0 ? smallest_change({arr[0], arr.begin() + 1, arr.end() - 1}.begin()) : 0));
        }
    }
    
    return ans;
}