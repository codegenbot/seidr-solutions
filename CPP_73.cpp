```c++
#include <vector>
#include <algorithm>

int smallest_change(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> dp(n+1);

    for (int i = 0; i <= n; i++) {
        dp[i] = i;
    }

    for (int len = 2; len <= n; len++) {
        for (int i = 0; i < n - len + 1; i++) {
            int j = i + len - 1;

            if (arr[i] == arr[j]) {
                dp[len] = dp[len-1];
            } else {
                dp[len] = std::min({dp[len-1].size() + 1, dp[len-2].size() + 2}) + 1;
            }
        }
    }

    return dp[n];
}

int main() { return smallest_change({0, 1}); }