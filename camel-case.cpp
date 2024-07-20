#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result;
    for (int i = 0; i <= str.size(); i++) {
        if (i == str.size() || str[i] == '-') {
            if (result.size() > 0) {
                result[0] = toupper(str[i]);
            } else {
                result += str[i];
            }
        } else if (str[i] != ' ') {
            if (i > 0 && str[i - 1] == '-') {
                result[0] = toupper(str[i]);
                result.erase(0, 1);
            } else {
                result += str[i];
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