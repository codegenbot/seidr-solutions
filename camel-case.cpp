#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    size_t start = 0, end;

    while ((end = str.find(' ')) != std::string::npos) {
        if (start != end) {
            result += char(std::toupper(str[start]));
            result += str.substr(start + 1, end - start - 1);
        }
        start = end + 1;
    }

    if (start < str.size()) {
        if (!result.empty())
            result += char(std::toupper(str[start]));
        else
            result = str.substr(start);
    }

    return result;
}

int main() {
    std::string str;
    while (std::cin >> str) {
        std::cout << kebabToCamel(str) << std::endl;
    }
    return 0;
}