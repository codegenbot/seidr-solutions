#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    std::string result = "";
    size_t pos = 0;

    while (pos < str.size()) {
        if (str.find('-', pos) != std::string::npos) {
            result += topper(str.substr(pos, str.find('-', pos)));
            pos = str.find('-', pos);
        } else {
            result += topper(str.substr(pos));
        }
        pos = str.find(' ', pos) + 1;
    }

    return result;
}

std::string topper(const std::string& str) {
    if (str.size() == 0)
        return "";
    if (str[0] >= 'a' && str[0] <= 'z')
        return (char)(str[0] - 32) + str.substr(1);
    return str;
}

int main() {
    std::string str;
    while (std::cin >> str) {
        std::cout << kebabToCamel(str) << std::endl;
    }
    return 0;
}