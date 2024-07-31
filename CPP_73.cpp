```c++
#include <vector>
#include <algorithm>

int smallest_change(std::vector<int> arr) {
    int n = arr.size();
    std::vector<std::vector<std::string>> dp(n+1, std::vector<std::string>(n+1));

    for (int i = 0; i <= n; i++) {
        dp[i][i] = "0";
    }

    for (int len = 2; len <= n; len++) {
        for (int i = 0; i < n - len + 1; i++) {
            int j = i + len - 1;

            if (arr[i] == arr[j]) {
                dp[i][j] = dp[i+1][j-1];
            } else {
                std::string min_val = std::min({dp[i+1][j].size() + "1", dp[i][j-1].size() + "1", dp[i+1][j-1].size() + "2"}).first;
                dp[i][j] = min_val;
            }
        }
    }

    return dp[0].at(n);
}

int main() { return smallest_change({0, 1}); }