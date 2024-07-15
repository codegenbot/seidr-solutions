#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
    for (int i = 0; i <= s.size(); i++) {
        if (i == s.size() || (s[i] == '-' && i > 0)) {
            if (result.size() > 0) {
                result[0] = toupper(s[i]);
            } else {
                result += s[i];
            }
        } else if (s[i] != '-') {
            if (i == 0) {
                result += tolower(s[i]);
            } else {
                result += s[i];
            }
        }
    }
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;
    std::cout << "Result: " << camelCase(input) << std::endl;
    return 0;
}