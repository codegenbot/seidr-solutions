```
#include <iostream>
#include <string>

std::string solve(int N){
    int sum = 0;
    while(N > 0){
        sum += (N & 1);
        N >>= 1;
    }
    std::string result = "";
    while(sum > 0){
        if(sum & 1) result.push_back('1');
        else result.push_back('0');
        sum >>= 1;
    }
    std::reverse(result.begin(), result.end());
    return result;
}