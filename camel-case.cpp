#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '-') {
            for (int j = i + 1; j <= str.find(' ', i); j++) {
                result += toupper(str[j]);
            }
            i = str.find(' ', i);
        } else if (str[i] == ' ') {
            continue;
        } else {
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