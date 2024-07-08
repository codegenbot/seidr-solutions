#include <cmath>
#include <algorithm>
#include <string>
#include <iostream>

void rounded_avg(int n,int m){
    if(n > m) {
        std::cout << "-1" << std::endl;
        return;
    }
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
    std::reverse(binary.begin(),binary.end());
    std::cout << binary << std::endl;
}

int main(){
    int n, m;
    std::cin >> n >> m;
    rounded_avg(n,m);
    return 0;
}