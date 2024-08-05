#include <iostream>
#include <string>
#include <algorithm>
#include <cassert>

std::string solve(std::string s){
    int n = s.length();
    bool hasLetter = false;
    for(int i=0; i<n; i++){
        if(isalpha(s[i])){
            hasLetter = true;
            s[i] = islower(s[i]) ? toupper(s[i]) : tolower(s[i]);
        }
    }
    if(!hasLetter){
        std::reverse(s.begin(), s.end());
    }
    return s;
}

int main(){
    assert(solve("#ccc") == "#CCC");
    // Additional test cases can be added here
    return 0;
}