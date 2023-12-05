```
#include<stdio.h>
#include<vector>
using namespace std;
bool will_it_fly(vector<int> q,int w){
    int sum=0;
    for(int i:q)
        sum+=i;
    return (sum<=w && isBalanced(q));
}
bool isBalanced(vector<int> q){
    int n = q.size();
    if(n==1)
        return true;
    for(int i=0;i<n/2;i++)
        if(q[i]!=q[n-1-i])
            return false;
    return true;
}
```