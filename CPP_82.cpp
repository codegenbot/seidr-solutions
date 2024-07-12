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
            while(n > 0) {
                s.append(std::to_string(n % 10));
                n /= 10;
            }
        } else {
            s += std::string(1, c); // push_back char as a string instead of char
        }
    }
    return s.length() > 1;
}

int main() {
    assert(prime_length("0123") == true); 
    const char* str = "Hello";
    bool result = prime_length(str);
    std::cout << "Prime length of '" << str << "' is: " << (result ? "prime" : "not prime") << std::endl;
    return 0;
}