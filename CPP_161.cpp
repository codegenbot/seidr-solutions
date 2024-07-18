#include <algorithm>
#include <cctype>
#include <string>

std::string solve(const std::string &s) {
    std::string result = s;
    for(char &c : result){
        if(isalpha(c)){
            c = islower(c) ? toupper(c) : tolower(c);
        }
    }
    if(std::all_of(result.begin(), result.end(), [](char c){ return !isalpha(c); })){
        std::reverse(result.begin(), result.end());
    }
    return result;
}