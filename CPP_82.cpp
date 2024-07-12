#include <iostream>
#include <cstring>
#include <cassert>
#include <string>

bool isPrime(int n) {
    if(n <= 1) return false;
    for(int i=2; i*i<=n; i++){
        if(n%i==0) return false;
    }
    return true;
}

bool prime_length(const char* str){
    std::string s = "";
    for(int i = 0; str[i]; i++) {
        int num = str[i] - '0';
        if(isPrime(num)) {
            while(!isPrime(num+1)) num++;
            // Concatenate the converted number as a string
            s += std::to_string(num);
        } else {
            // Add characters as is
            s.push_back(str[i]);
        }
    }
    return s.length() > 1;
}