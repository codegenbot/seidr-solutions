#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '-') {
            if (i > 0 && str[i-1] != ' ') {
                result += toupper(str[i+1]);
                i++;
            }
        } else if (str[i] == ' ') {
            continue;
        } else {
            if (result.length() == 0) {
                result = tolower(str[i]);
            } else {
                result += toupper(str[i]);
            }
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