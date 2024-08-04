#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <cassert>

std::string solve(std::string s){
    int n = s.length();
    bool hasLetter = false;
    
    for(int i=0; i<n; i++){
        if(std::isalpha(s[i])){
            hasLetter = true;
            if(std::islower(s[i])){
                s[i] = std::toupper(s[i]);
            } else {
                s[i] = std::tolower(s[i]);
            }
        }
    }
    
    if(!hasLetter){
        std::reverse(s.begin(), s.end());
    }
    
    return s;
}

int main(){
    assert(solve("#ccc") == "#CCC");
    return 0;
}