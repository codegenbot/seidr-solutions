#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    for (int i = 0; i <= str.size(); i++) {
        if (i == str.size() || str[i] == '-') {
            if (result.empty()) {
                continue;
            }
            result[0] = toupper(result[0]);
            break;
        } else if (str[i] != '-') {
            result += tolower(str[i]);
        }
    }
    return result;
}

int main() {
    std::string str;
    while(std::cin >> str) {
        std::cout << camelCase(str) << std::endl;
    }
    return 0;
}