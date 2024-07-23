```cpp
#include <vector>
#include <iostream>

int smallest_change(std::vector<int> arr) {
    int n = arr.size();
    std::vector<std::vector<int>> dp(n, std::vector<int>(n));
    
    for (int i = 0; i < n; i++) {
        dp[i][i] = 0;
    }
    
    for (int length = 2; length <= n; length++) {
        for (int i = 0; i < n - length + 1; i++) {
            int j = i + length - 1;
            
            if (arr[i] == arr[j]) {
                dp[i][j][0] = 0;
            } else {
                dp[i][j][0] = 1 + std::min(dp[i + 1][j - 1][0], dp[i][j - 1][0]);
            }
        }
    }
    
    return dp[0][n - 1][0];
}

int main() {
    int result = smallest_change({0, 1});
    std::cout << "smallest_change({0, 1}) = " << result << std::endl;
    return 0;
}