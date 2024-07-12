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
        if(str[i] >= '0' && str[i] <= '9') {
            int n = str[i] - '0';
            bool is_n_prime = isPrime(n);
            if(is_n_prime) {
                char c = (n + '0');  // Convert the prime number back to a character
                s += c; 
            } else {
                s += '0';  
            }
        } else {
            s += std::string(1, str[i]); 
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