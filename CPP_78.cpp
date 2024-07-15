#include <iostream>
#include <string>
#include <cassert> // Add this line for assert function

int hex_key(std::string num){
    int count = 0;
    std::string primes = "2357BD";
    for(char c : num){
        if (primes.find(c) != std::string::npos){
            count++;
        }
    }
    return count;
}

int main() {
    assert(hex_key("") == 0); // Ensure that assert is working correctly
    
    return 0;
}