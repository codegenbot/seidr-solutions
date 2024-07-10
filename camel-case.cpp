#include <vector>
#include <iostream>
#include <string>
#include <sstream>

std::string camelCase(std::string s) {
    std::stringstream ss(s);
    std::string token;
    std::string result = "";
    bool firstWord = true;

    while (getline(ss, token, '-')) {
        if (!firstWord) {
            result += char(toupper(token[0]));
            token.erase(0, 1);
        }
        result += token;
        if (!ss.eof()) {
            result += " ";
        }
        firstWord = false;
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