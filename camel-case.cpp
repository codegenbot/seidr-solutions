Here is the solution:

#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    for (char c : str) {
        if (c == '-') {
            result += c + c;
        } else if (c == ' ') {
            continue;
        } else {
            if (!result.empty()) {
                result[0] = toupper(result[0]);
            }
            result += tolower(c);
        }
    }
    return result;
}

int main() {
    std::string str;
    std::cout << "Enter a string in kebab-case: ";
    std::cin >> str;
    std::cout << "camelCase: " << camelCase(str) << std::endl;
    return 0;
}