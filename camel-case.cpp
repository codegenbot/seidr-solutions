#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
    bool firstWord = true;
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            if (!firstWord)
                result += char(toupper(s[i + 1]));
            else
                firstWord = false;
            i++;
        } else if (s[i] == ' ') {
            if (!firstWord)
                result += char(toupper(s[i + 1]));
            else
                firstWord = false;
            i++;
        } else {
            if (firstWord)
                firstWord = false;
            result += s[i];
        }
    }
    
    return result;
}

int main() {
    std::string s;
    std::cin >> s;
    std::cout << camelCase(s) << std::endl;
    return 0;
}