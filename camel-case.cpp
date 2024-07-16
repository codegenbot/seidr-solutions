#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
    for (char c : s) {
        if (c == '-') {
            c = ' ';
        }
    }
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            if (result.empty()) {
                result += topperCase(s[i]);
            } else {
                result += tolower(s[i]);
            }
        } else {
            if (!result.empty()) {
                result[0] = topperCase(result[0]);
            }
            result += s[i + 1];
        }
    }
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter the string: ";
    std::getline(std::cin, input);
    std::cout << camelCase(input) << std::endl;
    return 0;
}