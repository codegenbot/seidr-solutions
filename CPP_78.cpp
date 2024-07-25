#include <string>
#include <iostream>

int hex_key(std::string num){
    int count = 0;
    std::string primes = "2357BD";
    for(char c : num){
        if(primes.find(c) != std::string::npos){
            count++;
        }
    }
    return count;
}

int main(){
    std::string input;
    std::cin >> input;
    std::cout << hex_key(input) << std::endl;
    return 0;
}