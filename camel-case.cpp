#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
    bool capitalizeNext = true;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '-') {
            capitalizeNext = true;
        } else if (capitalizeNext) {
            result += toupper(s[i]);
            capitalizeNext = false;
        } else {
            result += tolower(s[i]);
        }
    }
    return result;
}

int main() {
    std::string input;
    int count = 0;
    while (count < 5) {
        std::cout << "Enter a string in kebab-case: ";
        std::getline(std::cin, input);
        std::cout << "camelCase: " << camelCase(input) << std::endl;
        count++;
    }
    return 0;
}