#include <iostream>
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
    binary = std::to_string((avg > 0));
    while(avg > 0){
        binary += (avg & 1) ? "1" : "0";
        avg /= 2;
    }
    if(binary.empty()) binary = "0";
    reverse(binary.begin(),binary.end());
    return binary;
}

int main(){
    int n, m;
    std::cout << "Enter two numbers: ";
    std::cin >> n >> m;
    std::cout << rounded_avg(n,m);
    return 0;
}