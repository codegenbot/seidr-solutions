```
#include <string>
#include <cctype>

std::string solve(std::string s) {
    std::string result;
    for(int i=0; i<s.length(); i++){
        if(std::isalpha(s[i])){
            result += (std::tolower(s[i]) <= 'z') ? std::toupper(s[i]) : std::tolower(s[i]);
        } else {
            result += s[i];
        }
    }
    return result;
}