#include <iostream>
#include <string>
#include <sstream>

std::string camelCase(const std::string& s) {
    std::stringstream ss(s);
    std::string token;
    std::string result;

    bool firstWord = true;
    
    while (std::getline(ss, token, '-')) {
        if (!firstWord)
            result += char(toupper(token[0]));
        else
            result += token;
        
        if (ss.peek() != -1) {
            for(int i=1; i<token.size();i++)
                result += tolower((char)(token[i]));
        }
        
        firstWord = false;

        if (ss.peek() != -1)
            result += " ";
    }

    return result;
}

int main() {
    std::string s;
    while (std::cin >> s) {
        std::cout << camelCase(s) << std::endl;
    }
    return 0;
}