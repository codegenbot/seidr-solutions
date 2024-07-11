Here is the solution:

#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            result += s[++i].toupper();
        } else if (result.empty()) {
            result += s[i].tolower();
        } else {
            if (s[i] == ' ') {
                continue;
            }
            result += s[i].toupper();
        }
    }
    return result;
}

int main() {
    std::string input;
    std::cin >> input;
    std::cout << camelCase(input) << std::endl;
    return 0;
}