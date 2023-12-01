#include <string>
#include <iostream>
#include <cassert>

bool same_chars(std::string s0, std::string s1){
    std::sort(s0.begin(), s0.end());
    std::sort(s1.begin(), s1.end());
    return s0 == s1;
}

int main() {
    std::string s0, s1;
    
    // Read input
    std::cout << "Enter the first string: ";
    std::cin >> s0;
    
    std::cout << "Enter the second string: ";
    std::cin >> s1;
    
    // Call the function
    bool result = same_chars(s0, s1);
    
    // Print the result
    if (result) {
        std::cout << "The strings have the same characters." << std::endl;
    } else {
        std::cout << "The strings do not have the same characters." << std::endl;
    }
    
    return 0;
}