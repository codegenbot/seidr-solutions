#include <vector>
#include <iostream>
#include <string>
#include <sstream>

std::string camelCase(std::string s) {
    std::stringstream ss(s);
    std::string token;
    std::string result = "";
    bool firstWord = true;

    while (std::getline(ss, token, '-')) {
        if (!firstWord)
            result += char(toupper(token[0]));
        else
            result += token;
        result += token.substr(1) + " ";
        firstWord = false;
    }

    return result.substr(0, result.length() - 1);
}

int main() {
    std::string s;
    while (std::cin >> s) {
        std::cout << camelCase(s) << std::endl;
    }
    return 0;
}