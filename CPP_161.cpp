#include <iostream>
#include <algorithm>
#include <cassert>
#include <cctype>

std::string solve(std::string s) {
    for(char& c : s){
        if(isalpha(c)){
            if(islower(c)){
                c = toupper(c);
            } else {
                c = tolower(c);
            }
        }
    }
    if(count_if(s.begin(), s.end(), ::isalpha) == 0){
        reverse(s.begin(), s.end());
    }
    return s;
}

int main() {
    assert(solve("#ccc") == "#CCC");
    return 0;
}