#include <iostream>
#include <algorithm>
#include <cassert>

std::string solve(std::string s) {
    for(auto &c : s){
        if(isalpha(c)){
            if(islower(c)){
                c = toupper(c);
            } else {
                c = tolower(c);
            }
        }
    }
    if(all_of(s.begin(), s.end(), [](char c){return !isalpha(c);})){
        reverse(s.begin(), s.end());
    }
    return s;
}

int main() {
    assert(solve("#ccc") == "#CCC");
    return 0;
}