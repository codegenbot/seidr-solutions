#include <iostream>
#include <string>

std::string kebabToCamel(std::string s) {
    std::string result = "";
    for (char c : s) {
        if (c == '-') {
            result += char(toupper(s[++s.find(c)]));
            while (s.find(c) != s.npos) {
                s.erase(s.find(c), 1);
                c = s[0];
                s.erase(0, 1);
            }
        } else if (c != ' ') {
            result += c;
        }
    }
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::cin >> input;
    std::cout << "The output in camelCase is: " << kebabToCamel(input) << std::endl;
    return 0;
}