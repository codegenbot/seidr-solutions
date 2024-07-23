#include <string>
#include <algorithm>

std::string solve(std::string s){
    int n = s.size();
    bool hasLetter = false;
    for(int i=0; i<n; i++){
        if(std::isalpha(s[i])){
            hasLetter = true;
            s[i] = std::islower(s[i]) ? std::toupper(s[i]) : std::tolower(s[i]);
        }
    }
    if(!hasLetter){
        std::reverse(s.begin(), s.end());
    }
    return s;
}