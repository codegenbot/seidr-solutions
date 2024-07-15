#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
    bool capitalizeNext = true;
    std::string word = "";
    
    for (char c : s) {
        if (c == '-') {
            capitalizeNext = true;
            word += tolower(c);
        } else if (capitalizeNext) {
            word += toupper(c);
            capitalizeNext = false;
        } else {
            word += c;
        }
        
        if (c != '-' && c != ' ') {
            result += word;
            word = "";
        }
    }
    
    if (!word.empty()) {
        if (capitalizeNext) {
            result += toupper(word[0]);
            result += word.substr(1);
        } else {
            result += word;
        }
    }
    
    return result;
}

int main() {
    std::string input;
    std::cin >> input;
    std::cout << camelCase(input) << std::endl;
    return 0;
}