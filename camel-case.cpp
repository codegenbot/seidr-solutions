#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& s) {
    std::string result;
    bool first = true;

    for (char c : s) {
        if (c == '-') {
            if (!first) {
                result[0] = toupper(result[0]);
            }
            result += " ";
            first = false;
        } else if (c == ' ') {
            if (!first) {
                result[0] = toupper(result[0]);
            }
            result += " ";
            first = true;
        } else {
            if (!first) {
                result[0] = tolower(c);
            } else {
                result += c;
            }
            first = false;
        }
    }

    return result;
}

int main() {
    std::string s;
    while (std::cin >> s) {
        std::cout << kebabToCamel(s) << std::endl;
    }
    return 0;
}