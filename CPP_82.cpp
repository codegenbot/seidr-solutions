#include <iostream>
#include <string>

bool prime_length(std::string str);

int main() {
    std::cout << (prime_length("0") ? "true" : "false") << std::endl;
}

bool prime_length(std::string str){
    int n = str.length();
    bool is_prime = true;
    
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            is_prime = false;
            break;
        }
    }
    
    return is_prime;
}