#include <iostream>
#include <algorithm>
#include <string>

std::string solve(std::string s) {
    for(char &c : s){
        if(isalpha(c)){
            c = islower(c) ? toupper(c) : tolower(c);
        }
    }
    if(all_of(s.begin(), s.end(), [](char c){ return !isalpha(c); })){
        reverse(s.begin(), s.end());
    }
    return s;
}

int main() {
    std::string input;
    std::getline(std::cin, input);
    std::string result = solve(input);
    std::cout << result << std::endl;
    
    return 0;
}