int smallest_change(vector<int> arr) {
    int n = arr.size();
    vector<vector<bool>> dp(n, vector<bool>(n));
    
    for(int i = 0; i < n; ++i)
        dp[i][i] = true;
    
    for(int len = 2; len <= n; ++len){
        for(int i = 0; i < n - len + 1; ++i){
            int j = i + len - 1;
            if(arr[i] == arr[j])
                dp[i][j] = true;
            else
                dp[i][j] = false;
            for(int k = i+1; k <= j; ++k)
                if(dp[i][k-1] && dp[k][j])
                    break;
        }
    }
    
    int ans = 0;
    bool is_palindrome = true;
    for(int i = 0, j = n - 1; i < j;){
        if(arr[i] != arr[j]){
            is_palindrome = false;
            break;
        }
        ++i;
        --j;
    }
    
    if(is_palindrome)
        return 0;
    
    int res = 0;
    for(int i = 0, j = n - 1; i < j;){
        if(arr[i] != arr[j]){
            res++;
            break;
        }
        ++i;
        --j;
    }
    
    return res;
}