#include<stdio.h>
#include<vector>
using namespace std;

int smallest_change(vector<int> arr){
    int n = arr.size();
    vector<vector<bool>> dp(n,vector<bool>(n,false));
    
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            if(i==j)
                dp[i][j] = true;
            else if(arr[i] == arr[j])
                dp[i][j] = (i-j<2 || dp[(i+1)%n][(j-1)%n]);
            else
                dp[i][j] = false;
        }
    }
    
    int count = 0;
    for(int i=0; i<n-1; i++){
        if(!dp[i][n-i-1])
            count++;
    }
    return count;
}