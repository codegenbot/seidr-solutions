```c++
#include <vector>
#include <cassert>
using namespace std;

int smallest_change(vector<int> arr) {
    int n = arr.size();
    vector<vector<bool>> dp(n, vector<bool>(n));
    for (int i = 0; i < n; ++i) {
        dp[i][i] = true;
    }
    for (int i = 0; i < n - 1; ++i) {
        if (arr[i] == arr[i + 1]) {
            dp[i][i + 1] = true;
        }
    }
    int ans = n - 2;
    for (int len = 3; len <= n; ++len) {
        for (int i = 0; i < n - len + 1; ++i) {
            int j = i + len - 1;
            if (arr[i] == arr[j]) {
                dp[i][j] = dp[i + 1][j - 1];
            } else {
                dp[i][j] = dp[i + 1][j] || dp[i][j - 1];
            }
        }
    }
    int changes = 0;
    for (int i = 0; i < n; ++i) {
        if (!dp[0][n - 1]) {
            changes++;
            break;
        }
    }
    return changes;
}

int main() {
    assert(smallest_change({0, 1}) == 1);
}