int smallest_change(vector<int> arr) {
    int n = arr.size();
    vector<vector<bool>> dp(n, vector<bool>(n, false));
    
    for(int i=0; i<n; i++) {
        dp[i][i] = true;
    }
    
    for(int len=2; len<=n; len++) {
        for(int i=0; i<n-len+1; i++) {
            int j = i+len-1;
            if(arr[i]==arr[j]) {
                dp[i][j] = (len==2) || dp[i+1][j-1];
            }
        }
    }
    
    int res = n;
    for(int i=0; i<n; i++) {
        for(int j=i; j<n; j++) {
            if(!dp[i][j]) {
                res = min(res, 1 + (i==0 ? 1 : smallest_change({arr[0], arr.begin(), arr.end()})+1) );
            }
        }
    }
    
    return res;
}