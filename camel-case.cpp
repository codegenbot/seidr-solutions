#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    bool firstWord = true;
    
    for (char c : str) {
        if (c == '-') {
            result += ((firstWord) ? "" : "").substr(0, 1).toupper();
            firstWord = false;
        } else if (c != ' ') {
            if (!firstWord)
                result += c;
            else
                result += tolower(c);
            firstWord = false;
        }
    }
    
    return result;
}

int main() {
    std::string str;
    std::cin >> str;
    std::cout << camelCase(str) << std::endl;
    return 0;
}