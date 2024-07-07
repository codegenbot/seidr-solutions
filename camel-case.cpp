#include <iostream>
#include <string>
#include <cctype>

std::string camelCase(std::string s) {
    std::string result = "";
    bool inWord = false;

    for (char c : s) {
        if (c == '-') {
            continue; // skip hyphens
        } else if (!inWord && !isalnum(c)) { // check if it's the first letter of a word
            result += toupper(c);
            inWord = true;
        } else {
            result += tolower(c); 
            inWord = false;
        }
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