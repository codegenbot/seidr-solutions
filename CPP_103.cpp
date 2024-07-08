#include <cmath>
#include <algorithm>
#include <string>

std::string rounded_avg(int n,int m){
    if(n > m) return "-1";
    int sum = 0;
    for(int i=n; i<=m; i++){
        sum += i;
    }
    double avg = (double)sum/(m-n+1);
    avg = std::floor(avg + 0.5); 
    std::string binary = "";
    while(avg > 0){
        binary = (avg & 1) ? "1" + binary : "0" + binary;
        avg /= 2;
    }
    if(binary.empty()) binary = "0";
    reverse(binary.begin(),binary.end());
    return binary;