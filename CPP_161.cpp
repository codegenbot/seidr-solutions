#include <string>

std::string solve(std::string s){
    std::string result = "";
    bool foundLetter = false;

    for(int i = 0; i < s.length(); i++){
        if(isalpha(s[i])){
            foundLetter = true;
            result += (s[i] >= 'a' && s[i] <= 'z') ? toupper(s[i]) : tolower(s[i]);
        } else {
            result += s[i];
        }
    }

    if(!foundLetter) {
        reverse(result.begin(), result.end());
    }

    return result;
}