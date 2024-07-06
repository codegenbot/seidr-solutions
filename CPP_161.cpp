#include <iostream>
#include <string>
#include <cctype>

std::string solve(std::string s) {
    std::string result = "";
    for(int i = 0; i < s.length(); i++){
        if(isalpha(s[i])){
            char c = (islower(s[i])) ? toupper(s[i]) : tolower(s[i]);
            result += c;
        }
        else{
            result += s[i];
        }
    }
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    
    std::cout << solve(input) << std::endl;
    
    return 0;
}