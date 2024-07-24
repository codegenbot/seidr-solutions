Here is the solution:

#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
    for (char c : s) {
        if (c == '-') {
            result += c + ((result.length() > 0) ? "" : " ");
        } else if (c == ' ') {
            continue;
        } else {
            result += toupper(c);
        }
    }
    return result;
}

int main() {
    std::string s;
    while (std::cin >> s) {
        std::cout << camelCase(s) << std::endl;
    }
    return 0;
}