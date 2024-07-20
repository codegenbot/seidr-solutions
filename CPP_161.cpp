#include <string>
#include <cctype>

std::string solve(std::string s) {
    std::string result = "";
    for(int i=0; i<s.length(); i++){
        if(isalpha(s[i])){
            result += (islower(s[i])) ? toupper(s[i]) : tolower(s[i]);
        } else {
            result += s[i];
        }
    }
    return (result.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") == std::string::npos) 
           ? std::string(result.rbegin(), result.rend()) : result;
}