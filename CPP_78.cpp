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
    std::string input;
    std::cin >> input; // Read input from user
    int result = hex_key(input); // Call your function with the input
    std::cout << result << std::endl; // Output the result
    return 0;
}