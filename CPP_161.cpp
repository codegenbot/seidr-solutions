#pragma GCC target "c++11"

#include <cctype>
#include <algorithm>

std::string solve(std::string str){
    std::string result = "";
    for(int i=0; i<str.length(); i++){
        if(std::isalpha(str[i])){
            char c = (std::tolower(str[i]) <= 'z') ? std::toupper(str[i]) : std::tolower(str[i]);
            result += c;
        } else {
            result += str[i];
        }
    }
    return (result.find_first_not_of(" ") == std::string::npos) ? std::string(result.rbegin(), result.rend()) : result;
}