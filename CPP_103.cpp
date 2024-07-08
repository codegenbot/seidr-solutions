```
#include <string>
#include <cmath>
#include <algorithm>

std::string rounded_avg(int n,int m){
    if(n > m) return "-1";
    int sum = 0;
    for(int i=n; i<=m; i++){
        sum += i;
    }
    double avg = (double)sum/(m-n+1);
    avg = floor(avg + 0.5); // round to nearest integer
    std::string binary = "";
    while(avg > 0){
        if(avg & 1) binary += "1";
        else binary += "0";
        avg >>= 1;
    }
    std::string rev = binary; 
    std::reverse(rev.begin(), rev.end()); 
    return rev;