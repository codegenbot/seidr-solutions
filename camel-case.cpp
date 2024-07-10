```c++
#include <iostream>
#include <string>

std::string camelCase(const std::string& s) {
    std::string result;
    bool first = true;

    for (char c : s) {
        if (c == '-') {
            first = false;
        } else if (!first) {
            result[0] = toupper(c);
            result += c;
        } else {
            result += tolower(c);
        }
    }

    return result;
}

int main() {
    std::string s;
    while (std::cin >> s) {
        std::string modifiedS = s;
        modifiedS.erase(std::remove(modifiedS.begin(), modifiedS.end(), '-'), modifiedS.end());
        modifiedS.erase(std::remove(modifiedS.begin(), modifiedS.end(), ' '), modifiedS.end());
        std::cout << camelCase(modifiedS) << '\n';
    }
    return 0;
}