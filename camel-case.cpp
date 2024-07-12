#include <vector>
#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    if (str.empty()) return "";
    
    std::string result = tolower(str.substr(0, 1));
    for (int i = 1; i < str.length(); i++) {
        if (str[i] == '-') {
            result += toupper(str.substr(i + 1, 1));
            i++;
        } else if (str[i] != ' ') {
            result += str[i];
        }
    }
    return result;
}

int main() {
    std::string str;
    while (std::getline(std::cin, str)) {
        std::cout << kebabToCamel(str) << std::endl;
    }
    return 0;
}