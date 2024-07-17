#include <vector>
#include <iostream>
#include <string>

std::string camelCase(const std::string& s) {
    std::string result = "";
    for (char c : s) {
        if (c == '-') {
            c = ' ';
        }
    }
    size_t pos = 0;
    while ((pos = s.find(' ')) != std::string::npos) {
        result += s.substr(0, pos);
        s.erase(0, pos + 1);
    }
    if (!s.empty()) {
        result += s[0];
        for (int i = 1; i < s.length(); ++i) {
            result += toupper(s[i]);
        }
    } else {
        result += "no space or dash";
    }
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    std::cout << camelCase(input) << std::endl;
    return 0;
}