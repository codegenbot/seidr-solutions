#include <vector>
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
        if (s[i] == ' ') {
            result += toupper(s[i + 1]);
            i++;
        } else if (!result.empty() && isalpha(s[i])) {
            result += tolower(s[i]);
        } else {
            result += s[i];
        }
    }
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::cin >> input;
    std::cout << "The camelCase conversion is: " << camelCase(input) << std::endl;
    return 0;
}