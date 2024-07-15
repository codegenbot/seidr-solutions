#include <string>
#include <algorithm>
#include <cctype>

std::string solve(std::string s){
    bool hasLetter = false;
    for(char &c : s){
        if(std::isalpha(c)){
            hasLetter = true;
            c = std::islower(c) ? std::toupper(c) : std::tolower(c);
        }
    }
    if(!hasLetter){
        std::reverse(s.begin(), s.end());
    }
    return s;
}