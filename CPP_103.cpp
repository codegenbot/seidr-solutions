#include <string>

string rounded_avg(int n,int m){
    if(n > m) return "-1";
    int sum = 0;
    for(int i=n; i<=m; i++){
        sum += i;
    }
    double avg = (double)sum / (m - n + 1);
    avg = floor(avg);
    string res = "";
    while(avg){
        if(avg & 1) res.append("1");
        else res.append("0");
        avg >>= 1;
    }
    reverse(res.begin(), res.end());
    return res;
}