#include <stdio.h>
#include <vector>

using namespace std;

vector<int> tri(int n){
    vector<int> ans(n + 1);
    ans[0] = 3;
    
    if(n > 0){
        ans[1] = 1 + (n / 2);
        
        for(int i = 2; i <= n; i++){
            if(i % 2 == 0){
                ans[i] = 1 + i / 2;
            }
            else{
                ans[i] = ans[i - 1] + ans[i - 2] + ans[i + 1];
            }
        }
    }
    
    return ans;
}