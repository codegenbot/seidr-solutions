#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
    bool firstWord = true;
    
    for (char c : s) {
        if (c == '-') {
            if (!firstWord) {
                result += toupper(s.substr(i + 1, s.find(' ') - i - 1));
                i = s.find(' ');
            }
            firstWord = false;
        } else if (c == ' ') {
            if (!firstWord) {
                result += tolower(s.substr(i + 1, s.find(' ') - i - 1));
                i = s.find(' ');
            }
            firstWord = true;
        } else {
            if (!firstWord) {
                result += c;
            } else {
                result += tolower(c);
            }
            firstWord = false;
        }
    }
    
    // Add the last word
    if (result.size() > 0) {
        if (isupper(result[0])) {
            result[0] = tolower(result[0]);
        } else {
            result += tolower(result[0]);
        }
    }
    
    return result;
}

int main() {
    std::string s;
    int i = 0;
    while (std::cin >> s) {
        std::cout << camelCase(s) << std::endl;
    }
    return 0;
}