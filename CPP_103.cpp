```cpp
#include <string>
#include <cmath> 
string rounded_avg(int n,int m); 

string rounded_avg(int n,int m){
    if(n > m) return "-1";
    int sum = 0;
    for(int i=n; i<=m; i++) sum += i;
    double avg = (double)sum/(m-n+1);
    int r = (int)floor(avg+0.5);
    string res = "";
    while(r > 0){
        if(r & 1) res.push_back('1');
        else res.push_back('0');
        r >>= 1;
    }
    reverse(res.begin(),res.end());
    return res;
}