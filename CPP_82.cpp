```cpp
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
        char c = str[i];
        if(c >= '0' && c <= '9') {
            int n = c - '0'; 
            s += std::to_string(isPrime(n) ? n : '0'); 
        } else {
            s += std::string(1, c); 
        }
    }
    return s.length() > 1;
}

int main() {
    const char* str = "0123";
    bool result = prime_length(str);
    std::cout << "Prime length of '" << str << "' is: " << (result ? "prime" : "not prime") << std::endl;
    return 0;
}