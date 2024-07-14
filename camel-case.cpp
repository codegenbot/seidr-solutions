#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::string result = "";
    for (char c : str) {
        if (c == '-') {
            c = ' ';
        }
    }
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            result += toupper(str.substr(i + 1, str.find(' ', i + 1) - i - 1)[0]);
            while (str[i + 1] != ' ') {
                i++;
            }
        } else {
            result += tolower(c);
        }
    }
    return result;
}

int main() {
    std::string input;
    std::cin >> input;
    std::cout << camelCase(input) << '\n';
    return 0;
}