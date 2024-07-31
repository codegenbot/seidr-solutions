#include <iostream>
#include <algorithm>
#include <cctype>

std::string solve(std::string s) {
    for(char &c : s){
        if(std::isalpha(c)){
            if(std::islower(c)){
                c = std::toupper(c);
            } else {
                c = std::tolower(c);
            }
        }
    }
    std::reverse(s.begin(), s.end());
    return s;
}

int main() {
    assert(solve("#ccc") == "#CCC");
    return 0;
}