int smallest_change(vector<int> arr) {
    int n = arr.size();
    vector<vector<bool>> dp(n, vector<bool>(n));
    
    for (int i = 0; i < n; i++) {
        for (int j = i; j >= 0; j--) {
            if (i == j)
                dp[i][j] = true;
            else
                dp[i][j] = arr[i] == arr[j] && (i - j < 2 || dp[i-1][j+1]);
        }
    }
    
    int res = n, left = 0, right = n - 1;
    while (left < right) {
        if (!dp[left][right]) {
            res--;
            if (arr[left] != arr[right])
                res += 2;
            left++;
            right--;
        } else
            break;
    }
    
    return res;
}