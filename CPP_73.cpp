```cpp
#include <vector>
#include <algorithm>

int smallest_change(std::vector<int> arr) {
    int n = arr.size();
    std::vector<std::vector<int>> dp(n+1, std::vector<int>(n+1));

    for (int i = 0; i <= n; i++) {
        dp[i][i] = 0;
    }

    for (int len = 2; len <= n; len++) {
        for (int i = 0; i < n - len + 1; i++) {
            int j = i + len - 1;

            if (arr[i] == arr[j]) {
                dp[i][j] = dp[i+1][j-1].size();
            } else {
                for(int k = 0; k <= 2; k++){
                    if(k == 0) dp[i][j] = dp[i+1][j].size() + 1;
                    else if(k == 1) dp[i][j] = dp[i][j-1].size() + 1;
                    else dp[i][j] = dp[i+1][j-1].size() + 2;
                }
            }
        }
    }

    return dp[0].at(n);
}

int main() { return smallest_change({0, 1}); }