#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& s) {
    if (s.empty()) return s;

    std::string result = "";
    for (char c : s) {
        if (c == '-') {
            if (!result.empty())
                result.push_back(char(toupper(result.back())));
            else
                result += " ";
        } else if (c == ' ') {
            if (!result.empty()) {
                result.push_back(char(toupper(result.back())));
                result.pop_back();
            }
        } else {
            result += tolower(c);
        }
    }

    return result;
}

int main() {
    std::string s;
    while (std::cout << "input: " && std::cin >> s) {
        std::cout << "output: " << kebabToCamel(s) << std::endl;
        s = "";
    }
    return 0;
}