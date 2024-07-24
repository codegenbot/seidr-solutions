#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    bool first = true;

    for (char c : str) {
        if (c == '-') {
            result += (first ? "" : "").substr(0, 1).toupper();
            first = false;
        } else if (c == ' ') {
            continue;
        } else {
            result += tolower(c);
        }
    }

    return result;
}

int main() {
    std::string str;
    while (true) {
        std::cout << "Enter a string in kebab-case (or 'exit' to quit): ";
        std::cin >> str;

        if (str == "exit") break;

        std::cout << camelCase(str) << std::endl;
    }

    return 0;
}