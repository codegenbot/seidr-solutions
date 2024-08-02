#include <iostream>
#include <string>
#include <algorithm>
#include <cassert>
#include <cctype>

std::string solve(const std::string &s) {
    for (char &c : s) {
        if (isalpha(c)) {
            c = islower(c) ? toupper(c) : tolower(c);
        }
    }
    
    if (count_if(s.begin(), s.end(), [](char c) { return isalpha(c); }) == 0) {
        reverse(s.begin(), s.end());
    }
    
    return s;
}

int main() {
    // Testing the functionality of solve function
    std::string input = "test123";
    std::string result = solve(input);
    assert(result == "tEST123");
    
    return 0;
}