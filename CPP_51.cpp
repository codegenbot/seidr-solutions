#include <iostream>
#include <cstring>
#include <cassert>

std::string remove_vowels(const std::string &text) {
    std::string result;
    for (char c : text) {
        if (!strchr("aeiouAEIOU", c)) {
            result += c;
        }
    }
    return result;
}

int main() {
    // Test cases
    assert(remove_vowels("ybcd") == "ybcd");
    assert(remove_vowels("hello") == "hll");
    
    // Main execution
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    
    std::string output = remove_vowels(input);
    std::cout << "String without vowels: " << output << std::endl;
    
    return 0;
}