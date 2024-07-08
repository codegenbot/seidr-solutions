```cpp
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

std::string rounded_avg(int n,int m){
    if(n > m) return "-1";
    int sum = 0;
    for(int i=n; i<=m; i++){
        sum += i;
    }
    double avg = std::ceil((double)sum/(m-n+1));
    std::string binary = "";
    while(avg > 0){
        binary = ((int)(avg >= 1)) ? "1" + binary : "0" + binary;
        avg /= 2;
    }
    if(binary.empty()) binary = "0";
    std::reverse(binary.begin(),binary.end());
    return binary;
}

int main(){
    int n, m;
    std::cout << "Enter two numbers: ";
    std::cin >> n >> m;
    std::cout << rounded_avg(n,m);
    return 0;
}