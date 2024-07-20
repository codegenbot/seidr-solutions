#include <iostream>
#include <string>
#include <sstream>

std::string camelCase(std::string s) {
    std::string result;
    bool first = true;

    for (char c : s) {
        if (c == '-') {
            if (!first) {
                result += char(toupper(c));
            }
            first = false;
        } else if (c == ' ') {
            if (!first) {
                result += " ";
            }
            first = true;
        } else {
            if (first) {
                result += toupper(c);
            } else {
                result += tolower(c);
            }
            first = false;
        }
    }

    return result;
}

int main() {
    std::string result = "";
    bool first = true;

    while (std::cin >> temp, !std::cin.fail()) {
        if (!first) 
            result += " ";
        else 
            first = false;
        for (char c : temp) {
            if (c == '-') break;
            if (first) 
                result += toupper(c);
            else 
                result += tolower(c);
        }
    }

    std::cout << camelCase(result) << std::endl;

    return 0;