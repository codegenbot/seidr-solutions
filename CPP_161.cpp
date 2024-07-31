#include <algorithm>
#include <cctype>
#include <string>

std::string solve(std::string s) {
    for(char &c : s) {
        if(isalpha(c)) {
            c = islower(c) ? toupper(c) : tolower(c);
        }
    }
    if(std::all_of(s.begin(), s.end(), [](char c){ return !std::isalpha(c); })) {
        std::reverse(s.begin(), s.end());
    }
    return s;
}