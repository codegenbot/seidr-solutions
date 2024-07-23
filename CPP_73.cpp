```cpp
#include <vector>

int smallest_change(vector<int> arr) {
    int n = arr.size();
    vector<bool> dp(n);
    
    for (int i = 0; i < n; i++) {
        dp[i] = true;
    }
    
    for (int i = 1; i < n; i++) {
        if (arr[i-1] != arr[i]) {
            dp[i] = false;
            for (int j = 0; j < i; j++) {
                if (dp[j] && arr[j] == arr[i]) {
                    dp[i] = true;
                    break;
                }
            }
        }
    }
    
    int changes = 0;
    for (int i = 1; i < n; i++) {
        if (!dp[i-1] || !dp[i]) {
            changes++;
        }
    }
    
    return changes;
}