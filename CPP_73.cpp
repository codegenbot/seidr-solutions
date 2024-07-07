#include <stdio.h>
#include <vector>
using namespace std;

int smallest_change(vector<int> arr) {
    int n = arr.size();
    vector<vector<bool>> dp(n, vector<bool>(n, false));

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
                for (int k = i; k <= j; k++) {
                    if (dp[i][k-1] && dp[k+1][j]) {
                        dp[i][j] = true;
                        break;
                    }
                }
            }
        }
    }

    int changes = 0;
    bool is_palindrome = false;
    for (int i = 0; i < n - 1; i++) {
        if (!dp[0][i]) {
            is_palindrome = false;
            break;
        } else {
            is_palindrome = true;
        }
    }

    if (!is_palindrome) {
        changes++;
    }

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != arr[n-i-1]) {
            changes++;
        }
    }

    return changes;
}