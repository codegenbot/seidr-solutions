int smallest_change(vector<int> arr){
    int n = arr.size();
    vector<vector<bool>> dp(n, vector<bool>(n));
    
    for(int i = 0; i < n; i++){
        for(int j = i; j >= 0; j--){
            if(i == j) dp[i][j] = true;
            else if(arr[i] == arr[j]) dp[i][j] = dp[i-1][j+1];
            else dp[i][j] = (dp[i-1][j+1] || arr[i] == arr[n-i-1]);
        }
    }
    
    int res = n;
    for(int i = 0; i < n; i++){
        for(int j = n - 1; j >= i; j--){
            if(dp[i][j]){
                res = min(res, (j - i + 1));
                break;
            }
        }
    }
    
    return res;
}