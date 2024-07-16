#include <iostream>
#include <algorithm>
#include <cassert>

std::string solve(std::string s) {
    for(char &c : s){
        if(isalpha(c)){
            if(islower(c)){
                c = toupper(c);
            } else {
                c = tolower(c);
            }
        }
    }
    std::reverse(s.begin(), s.end());
    return s;
}

int main() {
    assert (solve("#ccc") == "#CCC");
    
    return 0;
}