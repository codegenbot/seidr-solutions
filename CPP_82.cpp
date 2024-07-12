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
            if(isPrime(n) == false)
                s += std::to_string(0); // convert int to string and append
            else
                s += std::to_string(n);
        } else {
            s += c; // push_back char instead of appending as string
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