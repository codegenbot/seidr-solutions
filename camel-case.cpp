#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    bool firstWord = true;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '-') {
            result += toupper(str[i + 1]);
            i++;
        } else if (str[i] == ' ') {
            if (!firstWord) {
                result += toupper(str[i + 1]);
                i++;
            }
            firstWord = false;
        } else {
            if (!firstWord)
                result += str[i];
            else
                firstWord = false;
        }
    }

    return result;
}

int main() {
    std::string str;

    while (std::cin >> str) {
        std::cout << camelCase(str) << std::endl;
    }

    return 0;
}