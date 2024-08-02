#include <iostream>
#include <string>
#include <algorithm>
#include <cassert>

std::string solve(const std::string &s) {
    std::string modifiedString = s; // Make a copy of the input string
    
    for (char &c : modifiedString) {
        if (isalpha(c)) {
            c = islower(c) ? toupper(c) : tolower(c);
        }
    }

    if (count_if(modifiedString.begin(), modifiedString.end(), [](char c) { return isalpha(c); }) == 0) {
        std::reverse(modifiedString.begin(), modifiedString.end());
    }

    return modifiedString;
}

int main() {
    // Testing the functionality of solve function
    std::string input = "test123";
    std::string result = solve(input);
    assert(result == "tEST123");
    
    return 0;
}