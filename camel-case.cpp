#include <iostream>
#include <string>

std::string toCamelCase(const std::string& str) {
    std::string result;
    size_t start = 0;

    while (start < str.size()) {
        size_t end = str.find('-', start);
        if (end == std::string::npos) {
            result += toupper(str[start]);
            break;
        }
        result += toupper(str.substr(start, end - start));
        start = end + 1;
    }

    return result;
}

int main() {
    int numCases;
    std::cin >> numCases;

    for (int i = 0; i < numCases; ++i) {
        std::string str;
        std::cin >> str;
        std::cout << toCamelCase(str) << std::endl;
    }

    return 0;
}