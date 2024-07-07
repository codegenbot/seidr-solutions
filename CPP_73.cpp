Here is the completed code:

int smallest_change(vector<int> arr) {
    int n = arr.size();
    vector<vector<bool>> dp(n, vector<bool>(n));
    
    for (int i = 0; i < n; ++i)
        dp[i][i] = true;
    
    for (int length = 2; length <= n; ++length) {
        for (int i = 0; i <= n - length; ++i) {
            int j = i + length - 1;
            
            if (arr[i] == arr[j])
                dp[i][j] = true;
            else
                dp[i][j] = false;
        }
    }
    
    int changes = 0;
    for (int i = 0; i < n; ++i) {
        bool is_palindrome = false;
        for (int j = i; !is_palindrome && j < n; ++j) {
            if (dp[i][j]) {
                is_palindrome = true;
            } else {
                changes++;
            }
        }
    }
    
    return changes;
}