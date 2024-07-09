#include <iostream>
#include <string>
#include <cctype>

std::string kebabToCamel(const std::string& s) {
    std::string result;
    bool capitalize = true;

    for (char c : s) {
        if (c == '-') {
            if (capitalize) {
                result += toupper(s[0]);
                capitalize = false;
                s.erase(0, 1);
            }
            while (s.size() > 0 && s[0] == '-') {
                s.erase(0, 1);
            }
        } else if (capitalize) {
            result += toupper(c);
            capitalize = false;
        } else {
            result += tolower(c);
        }
    }

    return result + (s.size() > 0 ? " " + s : "");
}

int main() {
    std::string input;
    std::cin >> input;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << kebabToCamel(input) << std::endl;

    return 0;
}