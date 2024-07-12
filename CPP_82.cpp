```cpp
#include <cstring>
#include <cassert>
#include <iostream>
#include <string>

bool isPrime(int n) {
    if(n <= 1) return false;
    for(int i=2; i*i<=n; i++){
        if(n%i==0) return false;
    }
    return true;
}

bool prime_length(const char* str){
    std::string s;
    for(int i = 0; str[i]; i++) {
        char c = str[i];
        int n = c - '0'; // Convert character to integer
        if(isPrime(n)) { 
            s += c; 
        }
    }
    int len = s.length();
    return len > 1;
}

assert(prime_length("0") == false);
const char* str = "Hello";
bool result = prime_length(str);
std::cout << "Prime length of '" << str << "' is: " << (result ? "prime" : "not prime") << std::endl;