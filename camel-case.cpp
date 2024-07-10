#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    for (int i = 0; i <= str.size(); i++) {
        if (i == str.size() || str[i] == '-') {
            if (result.empty()) {
                result = toUpper(str.substr(i));
            } else {
                result += toLower(str.substr(i, 1));
            }
        }
    }
    return result;
}

std::string toUpper(std::string s) {
    for (int i = 0; i < s.size(); i++) {
        s[i] = toupper(s[i]);
    }
    return s;
}

std::string toLower(std::string s) {
    for (int i = 0; i < s.size(); i++) {
        s[i] = tolower(s[i]);
    }
    return s;
}

int main() {
    std::string str;
    while (true) {
        std::cout << "Enter a string in kebab-case: ";
        std::cin >> str;
        std::cout << camelCase(str) << std::endl;
    }
    return 0;
}