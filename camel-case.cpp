#include <vector>
#include <iostream>
#include <string>

std::string toCamelCase(std::string s) {
    std::string result = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '-') {
            i++; // Skip the '-'
        } else if (s[i] != ' ') {
            if (i > 0)
                result += char(toupper(s[i]));
            else
                result += s[i];
        }
    }
    return result;
}

int main() {
    std::string input;
    while (std::cin >> input) {
        std::cout << toCamelCase(input) << std::endl;
    }
    return 0;
}