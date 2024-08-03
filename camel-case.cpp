#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    size_t start = 0, end;

    while ((end = str.find(' ')) != std::string::npos) {
        size_t length = end - start;
        if (length > 0) {
            result += char(std::toupper(str[start]));
            result += str.substr(start + 1, end - start - 1);
        }
        start = end + 1;
    }

    if (start < str.size()) {
        size_t length = str.size() - start;
        if (length > 0) {
            result += char(std::toupper(str[start]));
            result += str.substr(start + 1);
        }
    }

    return result;
}

int main() {
    std::string result = "";
    while (std::cin >> std::ws >> result) {
        std::cout << kebabToCamel(result) << std::endl;
    }
    return 0;
}