#include <vector>
#include <algorithm>
#include <initializer_list>

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
                dp[i][j].push_back(dp[i+1][j-1].size());
            } else {
                auto min_size = std::min({dp[i+1][j].size() + 1, dp[i][j-1].size() + 1, dp[i+1][j-1].size() + 2});
                dp[i][j].push_back(min_size);
            }
        }
    }

    return (int)dp[0].at(n).size();
}

int main() { return smallest_change({0, 1}); }