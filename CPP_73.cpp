#include <iostream>
#include <vector>
#include <cassert>
#include <climits>

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
                dp[i][j] = dp[i + 1][j - 1];
            } else {
                int min_left = (i < n-1) ? dp[i+1][j] : INT_MAX;
                int min_right = (j > 0) ? dp[i][j-1] : INT_MAX;
                dp[i][j] = 1 + (arr[i] == arr[j]) ? dp[i+1][j-1] : std::min(min_left, min_right);
            }
        }
    }
    
    return dp[0][n - 1];
}

int main() {
    assert(smallest_change({0, 1}) == 1);
    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    std::cout << smallest_change(arr) << std::endl;
    return 0;
}