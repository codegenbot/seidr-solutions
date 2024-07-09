int smallest_change(vector<int> arr){
    int n = arr.size();
    vector<vector<bool>> dp(n, vector<bool>(n));
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            if(i == j) dp[i][j] = true;
            else if(arr[i] == arr[j]) dp[i][j] = true;
            else dp[i][j] = false;
        }
    }
    int ans = 0;
    for(int i = 0; i < n-1; i++){
        if(dp[0][i]){
            continue;
        }
        else{
            int left = i+1, right = n-i-1;
            while(left < right){
                if(arr[left] == arr[right]){
                    left++;
                    right--;
                }
                else break;
            }
            if(left >= right) ans += (n - 2*i - 1);
            else{
                int mid = min(left, right);
                ans += (mid - i - 1)*2 + 1;
            }
        }
    }
    return ans;
}