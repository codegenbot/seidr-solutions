#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    for (char c : str) {
        if (c == '-') {
            int pos = str.find(c);
            while (pos != string::npos) {
                char next = str[pos + 1];
                if (next >= 'a' && next <= 'z') {
                    result += next;
                } else if (next >= 'A' && next <= 'Z') {
                    result += tolower(next);
                }
                pos = str.find(c, pos + 1);
            }
        } else {
            if (!result.empty()) {
                char firstChar = c;
                if ((firstChar >= 'a' && firstChar <= 'z')) {
                    firstChar = toupper(firstChar);
                }
                result += firstChar;
            } else {
                result += tolower(c);
            }
        }
    }
    return result;
}

int main() {
    std::string input;
    while (std::cin >> input) {
        std::cout << camelCase(input) << std::endl;
    }
    return 0;
}