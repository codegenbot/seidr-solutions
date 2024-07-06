#include <iostream>
#include <string>
#include <cctype>
#include <cassert>

std::string solve(std::string s){
    std::string result = "";
    for(int i=0; i<s.length(); i++){
        if(isalpha(s[i])){
            char c = (islower(s[i])) ? toupper(s[i]) : tolower(s[i]);
            result += c;
        } else {
            result += s[i];
        }
    }
    return (result.find_first_not_of(" ") == std::string::npos) ? std::string(result.rbegin(), result.rend()) : result;
}

int main() {
    assert(solve("#ccc") == "#CCC");
    std::cout << "Test Passed" << std::endl;
    return 0;
}