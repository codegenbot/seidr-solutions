int smallest_change(vector<int> arr) {
    int n = arr.size();
    vector<vector<int>> dp(n, vector<int>(n));
    
    for(int i=0; i<n; i++){
        for(int j=i; j>=0; j--){
            if(i==j){
                dp[i][j] = 0;
            }
            else{
                dp[j][i] = (arr[j] == arr[i]) ? dp[j+1][i+1] : dp[j+1][i+1]+1;
            }
        }
    }
    
    return dp[0][n-1];
}