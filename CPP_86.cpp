#include <iostream>
#include <string>

std::string anti_shuffle(const std::string& str) {
    int n = str.length();
    std::string temp;
    for(int i=0; i<n/2; i++) {
        temp += str[i]; 
        temp += str[n-i-1];
    }
    if(n%2 != 0) temp += str[n/2]; 
    return temp;
}