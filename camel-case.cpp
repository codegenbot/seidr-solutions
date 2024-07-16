#include <iostream>
#include <string>

std::string camelCase(const std::string& s) {
    std::string result;
    bool capitalizeNext = false;

    for (char c : s) {
        if (c == '-') {
            capitalizeNext = true;
        } else {
            if (!capitalizeNext) {
                result += tolower(c);
            } else {
                result += toupper(c);
                capitalizeNext = false;
            }
        }
    }

    return result;
}

int main() {
    std::string s;
    std::cin >> s;
    std::cout << camelCase(s) << std::endl;

    return 0;
}