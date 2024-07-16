#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::string result;
    for (char c : str) {
        if (c == '-') {
            c = ' ';
        }
    }

    size_t start = 0, end = 0;
    while ((end = str.find(' ', start)) != std::string::npos) {
        result += str.substr(start, end - start);
        if (start < end) {
            result[0] = toupper(result[0]);
        }
        start = end + 1;
    }

    result += str.substr(start);

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);
    std::cout << "camelCase: " << camelCase(input) << std::endl;
    return 0;
}