#include <iostream>
#include <algorithm>
#include <string>

std::string solve(std::string s){
    for(char &c : s){
        if(std::isalpha(c)){
            if(std::isupper(c)){
                c = std::tolower(c);
            }else{
                c = std::toupper(c);
            }
        }
    }
    if(std::count_if(s.begin(), s.end(), ::isalpha) == 0){
        std::reverse(s.begin(), s.end());
    }
    return s;
}