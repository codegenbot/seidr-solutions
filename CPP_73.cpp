```cpp
#include <iostream>
#include <vector>

int main() {
    int result = smallest_change({0, 1});
    // test assertion
    assert(result == 2);
    std::cout << "The minimum number of coins needed is: " << result << std::endl;
    return 0;
}

int smallest_change(std::vector<int> arr) {
    int n = arr.size();
    std::vector<std::vector<bool>> dp(n, std::vector<bool>(n));
    
    for (int i = 0; i < n; i++) {
        dp[i][i] = true;
    }
    
    for (int len = 2; len <= n; len++) {
        for (int i = 0; i < n - len + 1; i++) {
            int j = i + len - 1;
            
            if (arr[i] == arr[j]) {
                dp[i][j] = true;
            } else {
                dp[i][j] = false;
                
                for (int k = i; k < j; k++) {
                    if (dp[i][k] && dp[k + 1][j]) {
                        dp[i][j] = true;
                        break;
                    }
                }
            }
        }
    }
    
    int changes = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (!dp[i][j]) {
                changes++;
            }
        }
    }
    
    return changes;
}