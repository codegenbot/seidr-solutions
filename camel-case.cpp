#include <iostream>
#include <string>
#include <sstream>

std::string camelCase(std::string s) {
    std::string result = "";
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
    std::string result;

    while (std::cin >> result) {
        for (int i = 0; i < result.size(); ++i) {
            if (result[i] == '-') {
                result[i] = '\0';
                break;
            }
        }

        char firstChar = result[0];
        result[0] = toupper(firstChar);
        for (int i = 1; i < result.size(); ++i) {
            if (std::string(1, result[i]).find_first_of("-") == std::string::npos) {
                result[i] = tolower(result[i]);
            }
        }

        result += camelCase(std::cin.get());
    }

    std::cout << result << std::endl;
}