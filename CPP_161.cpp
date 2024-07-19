#include <iostream>
#include <string>
#include <algorithm>

std::string solve(std::string s);

int main() {
    std::string input;
    std::cin >> input;
    std::cout << solve(input);
    return 0;
}

std::string solve(std::string s){
    int n = s.size();
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