Here is the solution:

#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    for (char c : str) {
        if (c == '-') {
            c = ' ';
        } else if (c == ' ') {
            result += toUpper(result);
            result += c;
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::cin >> str;
    std::cout << "camelCase: " << camelCase(str) << std::endl;
    return 0;
}