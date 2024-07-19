#include <iostream>
#include <algorithm>

std::string solve(std::string s) {
    bool hasLetter = false;
    for(char &c : s) {
        if(std::isalpha(c)) {
            hasLetter = true;
            if(std::islower(c)) {
                c = std::toupper(c);
            } else {
                c = std::tolower(c);
            }
        }
    }
    if(!hasLetter) {
        std::reverse(s.begin(), s.end());
    }
    return s;
}