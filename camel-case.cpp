#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    for (char c : str) {
        if (c == '-') {
            c++;
            while (c <= ' ') {
                c++;
            }
        }
        if (c != ' ') {
            result += toupper(c);
        } else {
            result += ' ';
        }
    }
    return result;
}

int main() {
    std::string str;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, str);
    std::cout << camelCase(str) << std::endl;
    return 0;
}