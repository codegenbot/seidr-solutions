#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    for (char c : str) {
        if (c == '-') {
            int start = str.find(c);
            str = str.substr(start + 1);
            result += toupper(str[0]);
            str.erase(0, 1);
        } else if (c == ' ') {
            int start = str.find(c);
            str = str.substr(start + 1);
            result += toupper(str[0]);
            str.erase(0, 1);
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    std::string input;
    while (true) {
        std::cout << "Enter a string in kebab-case or 'exit' to stop: ";
        std::cin >> input;
        if (input == "exit")
            break;
        std::cout << camelCase(input) << std::endl;
    }
    return 0;
}