#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::string result;
    bool first = true;

    for (char c : str) {
        if (c == '-') {
            if (!first)
                result += char(toupper(c));
            else
                first = false;
        } else if (c == ' ') {
            if (!first)
                result += char(toupper(c));
            else
                first = false;
        } else {
            if (first) {
                result += tolower(c);
                first = false;
            } else
                result += c;
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