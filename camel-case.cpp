#include <iostream>
#include <string>
#include <cctype>

std::string camelCase(const std::string& str) {
    std::string result = "";
    bool upper = true;

    for (char c : str) {
        if (c == '-') {
            if (!result.empty()) {
                if (upper) {
                    result += toupper(result[0]);
                } else {
                    result += tolower(result[0]);
                }
                result.erase(0, 1);
            }
            result += ' ';
            upper = true;
        } else if (upper) {
            result += toupper(c);
            upper = false;
        } else {
            result += tolower(c);
        }
    }

    return result;
}

int main() {
    std::string input = "s-lsdsy-uhhe";
    std::cout << camelCase(input + " ") << std::endl;
    return 0;
}