#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '-') {
            i++;
            while (i < str.length() && str[i] != ' ') {
                result += toupper(str[i]);
                i++;
            }
            result += ' ';
        } else if (str[i] == ' ') {
            continue;
        } else {
            if (!result.empty()) {
                result[0] = tolower(result[0]);
            }
            result += tolower(str[i]);
        }
    }
    return result;
}

int main() {
    std::string str;
    while (std::cin >> str) {
        std::cout << camelCase(str) << '\n';
    }
    return 0;
}