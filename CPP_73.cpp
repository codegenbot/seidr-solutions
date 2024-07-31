Here is the modified code:

```cpp
#include <vector>
#include <algorithm>

using namespace std;
typedef long size_type;

int smallest_change(std::vector<int> arr) {
    int n = arr.size();
    std::vector<std::vector<size_type>> dp(n+1, std::vector<size_type>(n+1));

    for (int i = 0; i <= n; i++) {
        dp[i][i] = 0;
    }

    for (int len = 2; len <= n; len++) {
        for (int i = 0; i < n - len + 1; i++) {
            int j = i + len - 1;

            if (arr[i] == arr[j]) {
                dp[i][j] = dp[i+1][j-1].size();
            } else {
                std::vector<size_type> options;
                for(int k = 0; k < 3; k++) {
                    options.push_back(dp[i+1][j].size() + (k == 0));
                    options.push_back(dp[i][j-1].size() + (k == 1));
                    options.push_back(dp[i+1][j-1].size() + 2);
                }
                dp[i][j] = *std::min_element(options.begin(), options.end());
            }
        }
    }

    return dp[0].at(n-1);
}

int main() { return smallest_change({0, 1}); }