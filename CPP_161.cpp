#include <iostream>
#include <string>
#include <vector>

int solve(const char* s) {
    std::vector<char> v; 
    for (char c : std::string(s)) {
        if (std::tolower(c) == 'a' || std::tolower(c) == 'e' || 
            std::tolower(c) == 'i' || std::tolower(c) == 'o' || std::tolower(c) == 'u') {
            v.push_back(std::tolower(c));
        }
    }
    return v.size();
}