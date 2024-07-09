#include <string>

string rounded_avg(int n,int m){
    if(n > m) return "-1";
    int sum = 0;
    for(int i=n; i<=m; i++) sum += i;
    int avg = (int)round((double)sum / (m - n + 1));
    string res = "";
    while(avg > 0){
        res = (avg & 1) ? "1" + res : "0" + res;
        avg >>= 1;
    }
    return res;