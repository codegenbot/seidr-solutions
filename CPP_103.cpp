#include <string>

std::string rounded_avg(int n,int m){
    if(n > m) return "-1";
    int sum = 0;
    for(int i=n; i<=m; i++){
        sum += i;
    }
    double avg = (double)sum/(m-n+1);
    avg = floor(avg + 0.5); 
    std::string binary = "";
    while(avg > 0){
        if(avg & 1) binary += "1";
        else binary += "0";
        avg >>= 1;
    }
    reverse(binary.begin(),binary.end());
    return binary;
}