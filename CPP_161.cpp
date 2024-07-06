#include <iostream>
#include <string>

std::string solve(std::string s){
    std::string result = "";
    for(int i=0; i<s.length(); i++){
        if(isalpha(s[i])){
            result += (islower(s[i])) ? toupper(s[i]) : tolower(s[i]);
        } else {
            result += s[i];
        }
    }
    return (result.find_first_of("abcdefghijklmnopqrstuvwxyz") == std::string::npos) ? std::reverse(result) : result;
}

int main(){
    // your code here
    return 0;
}