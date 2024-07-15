#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
    bool capitalizeNext = true;
    std::string word = "";

    for (char c : s) {
        if (c == '-') {
            capitalizeNext = true;
            word += toupper(c);
        } else if (capitalizeNext) {
            word += toupper(c);
            capitalizeNext = false;
        } else {
            word += tolower(c);
        }
    }

    for (char c : word) {
        result += c;
    }

    return result;
}

int main() {
    std::string input;
    std::cin >> input;
    std::cout << camelCase(input) << std::endl;
    return 0;
}