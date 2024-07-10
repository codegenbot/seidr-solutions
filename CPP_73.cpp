#include <iostream>
#include <vector>
#include <climits>

int smallest_change(std::vector<int> arr) {
    int n = arr.size();
    int m = 1; 
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            m = i + 1;
            break;
        }
    }
    
    int smallest = INT_MAX;

    std::vector<int> dp(n+1, 0);
    for (auto coin : arr) {
        dp[coin] = 1;
    }
    for (int length = 2; length <= n; length++) {
        for (int i = 0; i < n - length + 1; i++) {
                int j = i + length - 1;
                
                if (arr[i] == arr[j]) {
                    dp[length] = dp[length];
                } else {
                    int min_left = (i < n-length) ? dp[i+1] : INT_MAX;
                    int min_right = (j > length-1) ? dp[j+1] : INT_MAX;
                    dp[length] =  1 + (arr[i] == arr[j]) ? dp[length] : std::min(min_left, min_right);
                }
            }

        if (dp[n] < smallest) {
            smallest = dp[n];
        }
    }
    
    return smallest;
}