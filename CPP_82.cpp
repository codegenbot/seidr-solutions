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
        if(isPrime(str[i] - '0')) { 
            s += str[i];
        }
    }
    int len = s.length();
    if(len <= 1) return false;
    return true;

}

assert(prime_length("0") == false);
const char* str = "Hello";
bool result = prime_length(str);
std::cout << "Prime length of '" << str << "' is: " << (result ? "prime" : "not prime") << std::endl;