#include <iostream>
#include <string>
#include <cctype>

std::string anti_shuffle(const std::string& s) {
    std::string result = ""; // Initialize the string
    for (char c : s) {
        if (std::isalpha(c)) { 
            c = std::tolower(c); 
            result += c; 
        } else {
            result += c; 
        }
    }
    return result;
}

int main() {
    assert(anti_shuffle("Hi. My name is Mister Robot. How are you?") == "hi my name is mister robot how are you?");
    return 0;
}