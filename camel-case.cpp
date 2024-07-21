#include <iostream>
#include <string>

std::string toCamelCase(const std::string& str) {
    std::string result;
    size_t pos = 0;
    
    while (pos < str.size()) {
        if (str.find('-', pos) != std::string::npos) {
            pos = str.find('-', pos);
            result += toupper(str.substr(pos + 1, 1));
            result += tolower(str.substr(pos + 2, str.find(' ', pos) - pos - 2));
            pos = str.find(' ', pos);
        } else if (str.find(' ', pos) != std::string::npos) {
            pos = str.find(' ', pos);
            result += toupper(str.substr(pos + 1, 1));
            result += tolower(str.substr(pos + 2, str.rfind(' ') - pos - 1));
        } else {
            if (str.size() > pos + 1) {
                result += toupper(str[pos]);
                result += tolower(str.substr(pos + 1));
            } else {
                return str;
            }
        }
    }
    
    return result;
}

int main() {
    std::string input;
    while (std::cin >> input) {
        std::cout << toCamelCase(input) << '\n';
    }
    return 0;
}