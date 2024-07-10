```cpp
#include <iostream>
#include <string>

std::string rounded_avg(int n,int m){
    if(n > m) return "-1";
    long sum = 0;
    for(long i=n; i<=m; i++){
        sum += i;
    }
    long avg = (long)round((double)sum / (m-n+1));
    std::string res = "";
    while(avg > 0){
        if(avg & 1) res.push_back('1');
        else res.push_back('0');
        avg >>= 1;
    }
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    int n, m;
    std::cout << "Enter the value of n: ";
    std::cin >> n;
    std::cout << "Enter the value of m: ";
    std::cin >> m;
    std::cout << "The rounded average is: " << rounded_avg(n,m) << std::endl;
    return 0;
}