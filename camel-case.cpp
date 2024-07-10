#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::string result;
    for (char c : str) {
        if (c == '-') {
            c = ' ';
        }
    }
    size_t pos = 0, prevPos = 0;
    while ((pos = str.find(' ', pos)) != std::string::npos) {
        result += str.substr(prevPos, pos - prevPos);
        if (pos < str.size() - 1 && str[pos + 1] == '-') {
            pos++;
        }
        result[0] = toupper(result[0]);
        prevPos = pos + 1;
    }
    result += str.substr(prevPos);
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);
    std::cout << "camelCase: " << camelCase(input) << std::endl;
    return 0;
}